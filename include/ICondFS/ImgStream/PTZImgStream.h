#ifndef PTZIMGSTREAM_H
#define PTZIMGSTREAM_H

#include "ICondFS/ImgStream/CameraImgStream.h"
#include "ICondFS/ImgStream/StreamRTSP.h"
#include "ICondFS/ImgStream/Image.h"


/**
 * @brief The PTZImgStream class, PTZ video streams acquisition class
 * through unified ImgStream interface manipulation.
 */

class PTZImgStream : public CameraImgStream
{
public :
    PTZImgStream(string rtspStreamPath, int fps);
    virtual ~PTZImgStream();
    virtual bool hasNext();
    virtual bool startReading();
    virtual bool stopReading();
    virtual Image& getNextImage();

protected :
     SStream rtspStream;

     pthread_t threadReading;
     int threadPid;
     bool threadIsRunning;

     Image currentImage;

};

#endif // PTZIMGSTREAM_H
