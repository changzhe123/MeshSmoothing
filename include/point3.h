#pragma once

class Point3
{
public:
	Point3();
	Point3(double x, double y, double z); 
	Point3(double x, double y);
	Point3(const Point3& p);

	virtual ~Point3() {};

	static Point3 Cross(const Point3& u, const Point3& v);
	static double Dot(const Point3& u, const Point3& v);

	Point3 CrossPro(const Point3& u) const;
	double DotPro(const Point3& u) const;

	Point3& operator=(const Point3& p);
	Point3& operator+(const Point3& p);

public:

	double _x, _y, _z;

};