#ifndef COMPONENTIMGSTREAM_H
#define COMPONENTIMGSTREAM_H

#include "ICondFS/ImgStream/ImgStream.h"

class ComponentImgStream : public ImgStream
{
protected:
    //protected constructor to avoid instantiation of an incomplete type
    ComponentImgStream() {}

public:
    virtual inline bool isComposed() { return false; }
    virtual inline bool isLeaf() { return true; }
    virtual inline bool hasChildren() { return !isLeaf(); }

};

#endif // COMPONENTIMGSTREAM_H
