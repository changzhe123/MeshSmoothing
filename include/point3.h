#pragma once

class Point3
{
public:
	Point3();
	Point3(double x, double y, double z); 
	Point3(double x, double y);
	Point3(const Point3& p);

	virtual ~Point3() {};

	// ²Ù×÷·û
	Point3& operator=(const Point3& p);
	Point3& operator+(const Point3& p);
	

public:

	double _x, _y, _z;

};