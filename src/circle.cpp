#include "circle.h"

NAMESPACE_CZ_BEGIN

Circle::Circle(double r) : radius(r) {}

Circle::Circle(double r, const Point3& center) : radius(r), center(center) {}

double Circle::getCircleArea(double radius) const
{
    return 3.14159265358979323846 * radius * radius;
}

double Circle::getRadius() const
{
    return radius;
}

NAMESPACE_CZ_END