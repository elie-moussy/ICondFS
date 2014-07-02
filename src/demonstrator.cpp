#include "demonstrator.h"
#include <iostream>
#include <algorithm>

//static members init
const string Demonstrator::tLWindowName = "In";
const string Demonstrator::bLWindowName = "Detecs + particles";
const string Demonstrator::tRWindowName = "Color clues";
const string Demonstrator::bRWindowName = "Best particle + mean particle";

using std::string;
//using std::nullptr_t;

Demonstrator::Demonstrator(ParticleFilter* pf, string configFilePath) {
//TODO read params from file and call the full constructor afterwards
}
/*
Demonstrator::Demonstrator(ParticleFilter* pf, ImageSequenceReader* imSeqReader)
    : pf(pf), imSeqReader(imSeqReader) {

}
*/
Demonstrator::Demonstrator(ParticleFilter* pf, ImgStream* imStream)
    : pf(pf), imStream(imStream) {

}


Demonstrator::Demonstrator(ParticleFilter* pf,
                           const string filterParamsPath,
                           const string targetParamsPath,
                           const string datasetPath,
                           const string filenamePrefix,
                           const string filenameFormat,
                           const string filenameExtension,
                           const int seqStart,
                           const int seqEnd)
    : pf(pf), filterParamsPath(filterParamsPath), targetParamsPath(targetParamsPath),
      datasetPath(datasetPath), filenamePrefix(filenamePrefix),
      filenameFormat(filenameFormat), filenameExtension(filenameExtension),
      seqStart(seqStart), seqEnd(seqEnd) {

}

void Demonstrator::run() {

    //loads the 1st image in the buffers
    RetImgNew ret = initImagesNew();
    Mat imgIn =  ret.imgIn, imgRes = ret.imgRes,
        imgBuf = ret.imgBuf, imgColorClues = ret.imgColorClues,
        imgParticles = ret.imgParticles;

    //opens the writer
    cv::VideoWriter writer ("capture.avi", CV_FOURCC('X','V','I','D'), 15, imgIn.size());

    //inits the 1st samples from the detection on the 1st image
    pf->target->imgBank->set(&(imgIn.operator IplImage()));
    pf->target->detector->process();

    do {
            imgBuf = this->imStream->getNextImage().imgBuf;
            imgIn = Mat(Size(pf->target->width, pf->target->height), CV_8UC3);
            cv::resize(imgBuf, imgIn, imgIn.size());
            pf->target->imgBank->set(&(imgIn.operator IplImage()));
            pf->target->detector->process();

    } while(pf->target->detector->detectedCENTER.empty());

    Point point = pf->target->detector->detectedCENTER.front();
    double mm[3] = {point.x, point.y, 1.0};
    pf->InitSamplesFromPrior(mm);

    //creates the windows and display the images on it
    createOutputWindows();
    updateOutputWindows(imgIn, imgRes, imgColorClues, imgParticles);

    //unfolds the algorithm and displays the results
    while(this->imStream->hasNext())
      {
        //next image in the sequence loading and resizing to fit ICU config file size
        imgBuf = this->imStream->getNextImage().imgBuf;
        cv::resize(imgBuf, imgIn, imgIn.size());

        imgIn.copyTo(imgRes);
        imgIn.copyTo(imgColorClues);
        imgIn.copyTo(imgParticles);

        //update of the image in the filter
        pf->target->imgBank->set(&(imgIn.operator IplImage()));

        pf->target->detector->process();
        cout << "Found " << pf->target->detector->nbdetected << endl;

        //ICond filtering step
        pf->step();

        //traces the detection on the image
        pf->target->detector->disp(&(imgRes.operator IplImage()));

        //traces the color histograms ROI on the image
        TargetICU& tgt = *(TargetICU*)pf->target;
        tgt.colorPatch->draw(&(imgColorClues.operator IplImage()));

        //traces the particles on the images
        traceParticles(imgRes,pf);
        traceHeavierAndMeanParticles(imgParticles,pf);
        updateOutputWindows(imgIn, imgRes, imgColorClues, imgParticles, 10);
        //cvWriteFrame(writer, imgRes);
      }
}

string Demonstrator::getNextImageName() {
    static int index = seqStart;
    char num[10];
    string fileName;
    sprintf(num, filenameFormat.c_str() , index);
    fileName = datasetPath + filenamePrefix + num + filenameExtension ;
    index++;
    return fileName;
}

Demonstrator::RetImgNew Demonstrator::initImagesNew() {

    Mat imgBuf = this->imStream->getNextImage().imgBuf;
    Mat imgIn = Mat(Size(pf->target->width, pf->target->height),CV_8UC3);
    cv::resize(imgBuf, imgIn, imgIn.size());

    //output image
    Mat imgRes = imgIn.clone();
    Mat imgColorClues = imgIn.clone();
    Mat imgParticles = imgIn.clone();

    RetImgNew ret = {imgIn, imgBuf, imgRes, imgColorClues, imgParticles};
    return ret;
}

void Demonstrator::createOutputWindows(string name1, string name2,
                                       string name3, string name4) {
    cv::Rect r = getScreenSize();
    int maxWidth = r.width/2 - 20;
    int maxHeight = r.height/2 - 50;

    cvNamedWindow(name1.c_str(),0);
    cvMoveWindow(name1.c_str(), 0, 0);
    cvResizeWindow(name1.c_str(), maxWidth, maxHeight);

    cvNamedWindow(name2.c_str(), 0);
    cvMoveWindow(name2.c_str(), 0, r.height/2);
    cvResizeWindow(name2.c_str(), maxWidth, maxHeight);

    cvNamedWindow(name3.c_str(), 0);
    cvMoveWindow(name3.c_str(), r.width/2, 0);
    cvResizeWindow(name3.c_str(), maxWidth, maxHeight);

    cvNamedWindow(name4.c_str(), 0);
    cvMoveWindow(name4.c_str(), r.width/2, r.height/2);
    cvResizeWindow(name4.c_str(), maxWidth, maxHeight);

}

void Demonstrator::updateOutputWindows(Mat in, Mat res,
                         Mat detecs, Mat particles,
                         int delayMs,
                         string name1, string name2, string name3, string name4) {
    cv::imshow(name1.c_str(), in);
    cv::imshow(name2.c_str(), res);
    cv::imshow(name3.c_str(), detecs);
    cv::imshow(name4.c_str(), particles);
    char key = '0';
    key = cvWaitKey(delayMs);
    if (key == ' ')
        key = cvWaitKey(0);
    else if (key == 'q') {
        exit(0);
    }
}

void Demonstrator::traceParticles(Mat img, ParticleFilter* pf) {
    Particle* particles = new Particle[pf->nbSamples];

    particles = getSortedParticlesFromSamples(pf,particles);

    double normedColorCoef = 255.0d/pf->nbSamples;

    for(int i = pf->nbSamples-1 ; i != 0 ; i--) {
        Particle p = particles[i];
        double radius = max(16.0d * p.weight,1.0d);
        double colorR = 255.0d;
        double colorG = i*normedColorCoef;
        cv::circle(img, Point(p.x, p.y), radius, CV_RGB(colorR , colorG, 0), CV_FILLED);
    }
    delete[] particles;
}

cv::Rect Demonstrator::getScreenSize() {
    char *command="xrandr | grep '*'";
    FILE *fpipe = (FILE*)popen(command,"r");
    char line[256];
    fgets( line, sizeof(line), fpipe);
    pclose(fpipe);

    char s[256] = {0};
    int width = 0;
    int height = 0;
    sscanf(line,"%dx%d", &width, &height);

    cv::Rect screen;
    screen.width = width;
    screen.height = height;
    return screen;
}

bool Demonstrator::sortParticlesByWeigth(Particle a, Particle b) {
    return (a.weight > b.weight);
}

Particle* Demonstrator::getSortedParticlesFromSamples(ParticleFilter* pf, Particle* particles) {
    for(int i=0; i< pf->nbSamples ; i++) {
      Particle &p = particles[i];
      p.idx = i;
      p.x = (int)pf->sps[i]->ContinusP[0];
      p.y = (int)pf->sps[i]->ContinusP[1];
      p.weight = pf->curw->getNormalizedW(i);
      cout <<"  "<<endl;
    }

    std::sort(particles, particles + pf->nbSamples, sortParticlesByWeigth);
    return particles;
}

void Demonstrator::traceHeavierAndMeanParticles(Mat img, ParticleFilter* pf, Particle* particles) {
    bool allocParticles = false;
    if(particles == NULL) {
        allocParticles = true;
        particles = new Particle[pf->nbSamples];
        particles = getSortedParticlesFromSamples(pf, particles);
    }
    Particle bestParticle = particles[0];
    Particle meanParticle;
    Sample *s = pf->pfState;
    meanParticle.x = s->ContinusP[0];
    meanParticle.y = s->ContinusP[1];
    double radius = 3.0d;
    cv::circle(img, cvPoint(bestParticle.x, bestParticle.y), radius, CV_RGB(255 , 0, 0), CV_FILLED);
    cv::circle(img, cvPoint(meanParticle.x, meanParticle.y), radius, CV_RGB(0 , 255, 0), CV_FILLED);

    if (allocParticles)
        delete[] particles;
}

