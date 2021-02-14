#include "Square.h"

Square::Square (float side) : side_(side) {}
float Square::getArea() const { return side_*side_; }

