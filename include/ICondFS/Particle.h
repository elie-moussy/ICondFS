#ifndef PARTICLE_H
#define PARTICLE_H

struct Particle {
  int idx;
  int x;
  int y;
  double weight;
Particle() : idx(0), x(0), y(0), weight(0.0d){}
};

#endif // PARTICLE_H
