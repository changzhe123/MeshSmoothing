#include "rectangle.h"
#include <vector>

NAMESPACE_CZ_BEGIN

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}
Rectangle::Rectangle(Point3 p1, Point3 p2, Point3 p3, Point3 p4) : p1(p1), p2(p2), p3(p3), p4(p4) {};

double Rectangle::getRectangleArea(double width, double height) const
{
	return width * height;
}

bool Rectangle::getRectangleMeshQuality(const Point3& p1, const Point3& p2,
	const Point3& p3, const Point3& p4) const 
{
	bool result = false;

	if (p1._x == p2._x == p3._x || p1._y == p2._y == p3._y ||
		p2._x == p4._x == p3._x || p2._y == p4._y == p3._y)
	{
		return result;
	}

	//std::vector<std::vector<double>> Ak = {
	//{p3._x - pa1, pc1 - pa1},
	//{pb2 - pb1, pc2 - pa1}
	//};


}

NAMESPACE_CZ_END