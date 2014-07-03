#include "ICondFS/ImgStream/PTZImgStream.h"

static void* threadPTZCapture(void* stream) {
    SStream *str = (SStream *) stream;
    for(;;) {
        pthread_mutex_lock(&(str->mutex_stock));
            str->imgBuf = str->stream->grabFrame();
        pthread_mutex_unlock(&(str->mutex_stock));
    }
    return NULL;
}

PTZImgStream::PTZImgStream(string rtspStreamPath, int fps = -1)
    : threadIsRunning(false) {
    this->rtspStream.stream = new StreamRTSP(rtspStreamPath, fps);
}

PTZImgStream::~PTZImgStream() {
    if (this->threadIsRunning)
        this->stopReading();
    delete this->rtspStream.stream;
}

bool PTZImgStream::hasNext() {
    if (!this->threadIsRunning)
        return this->startReading();
    else
        return true;
}

bool PTZImgStream::startReading() {
    if(!this->threadIsRunning) {
        this->threadPid = pthread_create(&this->threadReading, NULL, threadPTZCapture, &this->rtspStream);
        this->threadIsRunning = true;
        return true;
    }
    else
        return false;
}

bool PTZImgStream::stopReading() {
    if(this->threadIsRunning) {
        pthread_cancel(this->threadReading);
        pthread_join(this->threadReading, NULL);
        this->threadIsRunning = false;
        return true;
    }
    else
        return false;
}

Image &PTZImgStream::getNextImage() {
    if (this->threadIsRunning) {
        pthread_mutex_lock(&this->rtspStream.mutex_stock);
            this->currentImage.imgBuf = rtspStream.imgBuf;
        pthread_mutex_unlock(&this->rtspStream.mutex_stock);
    }
    else {
        this->currentImage.imgBuf.release();
    }
    return this->currentImage;
}



