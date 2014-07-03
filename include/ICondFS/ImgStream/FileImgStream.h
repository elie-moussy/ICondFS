#ifndef FILEIMGSTREAM_H
#define FILEIMGSTREAM_H

#include <string>
#include <opencv2/highgui/highgui.hpp>
#include "ICondFS/ImgStream/ComponentImgStream.h"
#include "ICondFS/ImgStream/Image.h"

using std::string;

class FileImgStream : public ComponentImgStream
{
public:
    FileImgStream(string filename);

    virtual ~FileImgStream();
    virtual bool hasNext() /*override*/;
    virtual bool startReading() /*override*/;
    virtual bool stopReading() /*override*/;
    virtual Image& getNextImage() /*override*/;

protected:
    cv::VideoCapture cap;
    string filename;
    Image img;
    bool hasBeenGrabed;
};

#endif // FILEIMGSTREAM_H
