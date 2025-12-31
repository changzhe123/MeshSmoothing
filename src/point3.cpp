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

Point3 Point3::Cross(const Point3& u, const Point3& v)
{
    Point3 result;
    result._x = u._y * v._z - u._z * v._y;
    result._y = u._z * v._x - u._x * v._z;
    result._z = u._x * v._y - u._y * v._x;
    return result;
}

double Point3::Dot(const Point3& u, const Point3& v)
{
    return u._x * v._x + u._y * v._y + u._z * v._z;
}

Point3 Point3::CrossPro(const Point3& u) const
{
    double x = _y * u._z - _z * u._y;
    double y = _z * u._x - _x * u._z;
    double z = _x * u._y - _y * u._x;
    return Point3(x, y, z);
}
double Point3::DotPro(const Point3& u) const
{
    return  _x * u._x + _y * u._y + _z * u._z;
}