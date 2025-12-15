#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "point3.h"

#include <iostream>

using namespace CZ;

int main()
{
    Rectangle rect(5.0, 2.0);
    double rect_area = rect.getRectangleArea(5.0, 2.0);
    std::cout << "Area of rectangle is: " << rect_area << std::endl;

    Triangle tri(1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    double tri_area = tri.getTriangleArea(1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    std::cout << "Area of triangle is: " << tri_area << std::endl;

    Circle circle(2.0);
    double circle_area = circle.getCircleArea(1.0);
    std::cout << "Area of circle is: " << circle_area << std::endl;

    Circle circle1(3.0);

    return 0;
}
