#include "circle.h"

NAMESPACE_CZ_BEGIN
Circle::Circle(double r)
{
    radius = r;
}

double Circle::getCircleArea(double radius) const
{
    return 3.14159265358979323846 * radius * radius;
}

NAMESPACE_CZ_END