#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "point3.h"

#include <cmath>
#include <vector>
#include <iostream>

using namespace CZ;

int main()
{
    Rectangle rect(5.0, 2.0);
    double rect_area = rect.getRectangleArea(5.0, 2.0);
    std::cout << "Area of rectangle is: " << rect_area << std::endl;

    Point3 p1(1, 1, 1);
    Point3 p2(5, 4, 3);
    Point3 p3(5, 1, 3);

    Triangle tri1(1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    double tri_area1 = tri1.getTriangleArea(1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    std::cout << "Area of triangle is: " << tri_area1 << std::endl;

    Triangle tri2(p1, p2, p3);
    double tri_area2 = tri2.getTriangleArea1(p1, p2, p3);
    std::cout << "Area of triangle is: " << tri_area2 << std::endl;

    Circle circle(2.0);
    double circle_area = circle.getCircleArea(1.0);
    std::cout << "Area of circle is: " << circle_area << std::endl;

    std::cout << atan2(1, 1) << std::endl;
    std::cout << atan2(1, -1) << std::endl;
    std::cout << atan2(-1, -1) << std::endl;
    std::cout << atan2(-1, 1) << std::endl;

    return 0;
}




