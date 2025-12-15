#include "point3.h"

Point3::Point3() : _x(0.0),_y(0.0),_z(0.0) {}

Point3::Point3(double x, double y, double z) : _x(x), _y(y), _z(z) {}

Point3::Point3(const Point3& p) : _x(p._x), _y(p._y), _z(p._z) {}

Point3& Point3::operator=(const Point3& p)
{
    if (this != &p)
    {
        _x = p._x;
        _y = p._y;
        _z = p._z;
    }

    return *this;
}

Point3& Point3::operator+(const Point3& p)
{
    if (this != &p)
    {
        _x + p._x;
        _y + p._y;
        _z + p._z;
    }

    return *this;
}
