#ifndef DEMONSTRATOR_H
#define DEMONSTRATOR_H

#include <LibPF/filters/ParticleFilter.h>
#include "ICondFS/Particle.h"
#include "ICondFS/ImgStream/ImgStream.h"
#include <opencv2/core/core.hpp>


using cv::Mat;
using cv::Size;
using cv::VideoWriter;
using cv::Point;

class Demonstrator
{
public:
    Demonstrator(ParticleFilter* pf, string configFilePath);

    //Demonstrator(ParticleFilter* pf, ImageSequenceReader* imSeqReader);

    Demonstrator(ParticleFilter* pf, ImgStream* imSeqReader);

    Demonstrator(ParticleFilter* pf,
                 const string filterParamsPath,
                 const string targetParamsPath,
                 const string datasetPath,
                 const string filenamePrefix,
                 const string filenameFormat,
                 const string filenameExtension,
                 const int seqStart,
                 const int seqEnd);

    void run();
    void runNew();

protected:
    ParticleFilter* pf;
    //ImageSequenceReader* imSeqReader;
    ImgStream* imStream;

    static const string tLWindowName ;
    static const string bLWindowName ;
    static const string tRWindowName ;
    static const string bRWindowName ;

    const string filterParamsPath;
    const string targetParamsPath;
    const string datasetPath;
    const string filenamePrefix;
    const string filenameFormat;
    const string filenameExtension;
    const int seqStart;
    const int seqEnd;


    void createOutputWindows(string name1 = tLWindowName, string name2 = bLWindowName,
                             string name3 = tRWindowName, string name4 = bRWindowName) ;

    void updateOutputWindows(Mat in, Mat res, Mat detecs, Mat particles,
                                           int delayMs = 0,
                                           string name1 = tLWindowName, string name2 = bLWindowName,
                                           string name3 = tRWindowName, string name4 = bRWindowName);

    void traceParticles(Mat img, ParticleFilter* pf);
    cv::Rect getScreenSize();
    static bool sortParticlesByWeigth(Particle a, Particle b);
    Particle* getSortedParticlesFromSamples(ParticleFilter* pf, Particle* particles);
    void traceHeavierAndMeanParticles(Mat img, ParticleFilter* pf, Particle* particles = NULL);
    string getNextImageName();


private:

    struct RetImgNew {
        Mat imgIn;
        Mat imgBuf;
        Mat imgRes;
        Mat imgColorClues;
        Mat imgParticles;
    };

    RetImgNew initImagesNew();
};

#endif // DEMONSTRATOR_H
