#include "FileImgStream.h"

FileImgStream::FileImgStream(string filename) : filename(filename), hasBeenGrabed(false) {
    this->cap.open(filename);
}


FileImgStream::~FileImgStream() {

}

bool FileImgStream::hasNext() {

    hasBeenGrabed = cap.grab();
    return hasBeenGrabed;
}

bool FileImgStream::startReading() {
    if(!this->cap.isOpened())
        return this->cap.open(filename);
    else
        return this->cap.isOpened();
}

bool FileImgStream::stopReading() {
    this->cap.release();
    return true;
}

Image &FileImgStream::getNextImage() {

    if (hasBeenGrabed)
        this->cap.retrieve(this->img.imgBuf);
    else
        this->cap.read(this->img.imgBuf);

    hasBeenGrabed = false;
    return this->img;
}
