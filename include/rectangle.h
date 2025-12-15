#pragma once

#include "shape.h"
#include "point3.h"

NAMESPACE_CZ_BEGIN
class Rectangle : public Shape
{
public:

	Rectangle(double w, double h);
	Rectangle(Point3 p1, Point3 p2, Point3 p3, Point3 p4);

	double getRectangleArea(double width, double height) const override;

	bool getRectangleMeshQuality(const Point3& p1, const Point3& p2, const Point3& p3, const Point3& p4) const;
	

private:

	double width;
	double height;

	Point3 p1, p2, p3, p4;

};
NAMESPACE_CZ_END
