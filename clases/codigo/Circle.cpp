#include <cmath>
#include "Circle.h"

Circle::Circle(float radious) : radious_(radious) {}
float Circle::getArea() const { return radious_ * (M_PI * M_PI); }
