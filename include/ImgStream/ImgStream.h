#ifndef IMGSTREAM_H
#define IMGSTREAM_H

#include "Image.h"
#include <opencv2/core/core.hpp>
using cv::Size;


/**
 * @brief General purpose interface to access video streams, whether it's from cameras, group of cameras or files
 * The inheriting classes are meant to be used through this interface for code reusability
 */

//class Image; //forward declaration

class ImgStream
{
public:
    //ImgStream();
    virtual bool hasNext()=0;
    virtual bool isLeaf()=0;
    virtual bool hasChildren()=0;
    virtual bool isComposed()=0;
    virtual bool startReading()=0;
    virtual bool stopReading()=0;
    virtual Image& getNextImage()=0;

    Size getImgSize();
};

#endif // IMGSTREAM_H
