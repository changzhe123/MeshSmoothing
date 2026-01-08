#pragma once

#include "shape.h"
#include "point3.h"

NAMESPACE_CZ_BEGIN
class Circle : public Shape
{
public:

	Circle(double radius);
	Circle(double radius, const Point3& center);

	double getCircleArea(double radius) const override;

private:

	double radius;
	Point3 center;
};

NAMESPACE_CZ_END