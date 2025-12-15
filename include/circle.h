#pragma once

#include "shape.h"

NAMESPACE_CZ_BEGIN
class Circle : public Shape
{
public:

	Circle(double radius);

	double getCircleArea(double radius) const override;

private:
	double radius;
};

NAMESPACE_CZ_END