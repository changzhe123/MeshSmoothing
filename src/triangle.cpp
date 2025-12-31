// my file
#include "triangle.h"

// other
#include <cmath>
#include <vector>

NAMESPACE_CZ_BEGIN

Triangle::Triangle(double a, double b, double c, double d, double e, double f)
	: a(a), b(b), c(c), d(d), e(e), f(f) {}

Triangle::Triangle(const Point3& p1, const Point3& p2, const Point3& p3)
	: p1(p1), p2(p2), p3(p3){}

double Triangle::getTriangleArea(double a, double b, double c, double d, double e, double f) const
{
	double s = (a + b + c + d + e + f) / 2.0;
	return std::sqrt(s * (s - a) * (s - b) * (s - c) * (s - d) * (s - e) * (s - f));
}

double Triangle::getTriangleArea(double a, double b, double c, double d, double e, double f) const
{
	double s = (a + b + c + d + e + f) / 2.0;
	return std::sqrt(s * (s - a) * (s - b) * (s - c) * (s - d) * (s - e) * (s - f));
}

double Triangle::GetLength(double x1, double y1, double x2, double y2) const
{
	return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double Triangle::GetLength(const Point3& p1, const Point3& p2) const
{
	return std::sqrt((p2._x - p1._x) * (p2._x - p1._x) + (p2._y - p1._y) * (p2._y - p1._y) 
		+ (p2._z - p1._z) * (p2._z - p1._z));
}

bool Triangle::GetTriMeshQuality(double pa1, double pa2, double pb1, double pb2, 
	double pc1, double pc2, double& quality) const
{
	bool result = false;
	if (pa1 == pb1 == pc1 || pb1 == pb2 == pc2)
	{
		return result;
	}

	std::vector<std::vector<double>> Ak = {
		{pb1 - pa1, pc1 - pa1},
		{pb2 - pb1, pc2 - pa1}
	};

	double det = Ak[0][0] * Ak[1][1] - Ak[0][1] * Ak[1][0];

	if (det == 0)
	{
		return result;
	}

	double L1 = GetLength(pa1, pa2, pb1, pb2);
	double L2 = GetLength(pa1, pa2, pb1, pb2);
	double L12 = GetLength(pb1, pb2, pc1, pc2);

	quality = std::sqrt(3) * det / std::sqrt(L1 * L1 + L2 * L2 - L12 * L12);

}

NAMESPACE_CZ_END