#ifndef _dotsphere_h
#define _dotsphere_h

#include <vector>
#include "Vec3.h"
using namespace std;
using namespace OpenMM;

vector<Vec3> dotsphere(int density);

vector<Vec3> pointsphere(Vec3& coordinates, double raduis, double density);

#endif
