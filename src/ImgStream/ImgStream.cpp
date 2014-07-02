#include "ImgStream.h"

Size ImgStream::getImgSize()
{
   return getNextImage().imgBuf.size();
}

#include "ImgStream.h"

