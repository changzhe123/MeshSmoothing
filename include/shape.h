#pragma once

#include "shape_namespace_def.h"

NAMESPACE_CZ_BEGIN

class Shape
{

public:
	virtual ~Shape() = default;

	virtual double getRectangleArea(double width, double height) const;
	virtual double getCircleArea(double radius) const;
	virtual double getTriangleArea(double a, double b, double c, double d, double e, double f) const;

private:

	double width;
	double height;
	double radius;
	double base;
};

NAMESPACE_CZ_END
