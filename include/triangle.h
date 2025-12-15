#pragma once

#include "shape.h"
#include "point3.h"


NAMESPACE_CZ_BEGIN
class Triangle : public Shape
{
public:

	Triangle(double a, double b, double c, double d, double e, double f);
	double getTriangleArea(double a, double b, double c, double d, double e, double f) const override;

	// 两点长度
	double GetLength(double x1, double y1, double x2, double y2) const;
	double GetLength(const Point3& p1, const Point3& p2) const;

	// 获取tri网格质量
	bool GetTriMeshQuality(double pa1, double pa2, double pb1, double pb2, double pc1,
		double pc2, double& quality) const;

private:

	double a, b, c, d, e, f;
};

NAMESPACE_CZ_END