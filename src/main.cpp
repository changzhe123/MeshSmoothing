#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include "point3.h"

#include <cmath>
#include <vector>
#include <iostream>
#include <map>

using namespace CZ;

int main()
{
    Rectangle rect(5.0, 2.0);
    double rect_area = rect.getRectangleArea(5.0, 2.0);
    std::cout << "Area of rectangle is: " << rect_area << std::endl;

    Triangle tri1(1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    double tri_area1 = tri1.getTriangleArea(1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    std::cout << "Area of triangle is: " << tri_area1 << std::endl;

    Point3 p1(1, 1, 1); Point3 p2(5, 4, 3); Point3 p3(5, 1, 3);
    Triangle tri2(p1, p2, p3);
    double tri_area2 = tri2.getTriangleAreaPro(p1, p2, p3);
    std::cout << "Area of triangle is: " << tri_area2 << std::endl;

    Circle circle(2.0);
    double circle_area = circle.getCircleArea(1.0);
    std::cout << "Area of circle is: " << circle_area << std::endl;

    auto c1 = std::make_shared<Circle>(5.0, Point3(1, 2, 3));
	auto c2 = std::make_shared<Circle>(3.0, Point3(4, 5, 6));
	auto c3 = std::make_shared<Circle>(2.0, Point3(7, 8, 9));

	Shape* shapes[] = { c1.get(), c2.get(), c3.get() };

    for (auto shape : shapes)
    {
        double area = shape->getCircleArea(shape->getRadius());
    }

    return 0;
}

int ceshi()
{
    return 0;

    std::cout << atan2(1, 1) << std::endl;
    std::cout << atan2(1, -1) << std::endl;
    std::cout << atan2(-1, -1) << std::endl;
    std::cout << atan2(-1, 1) << std::endl;

    double heights[10] = { 0 };
    for (auto height : heights)
    {
        //std::cout << heights[0] << std::endl;
    }
    
    for (int i = 0; i <= sizeof(heights); i++)
    {
        //std::cout << heights[i] << std::endl;
    }
    
    char hello[5]{ 'h','e','l','l','o' };
    //std::cout << hello << std::endl;
    
    std::map<std::string, int> employee;
    
    employee["John"] = 1000;
    employee["Jane"] = 2000;
    employee["Bob"] = 3000;
    
    for (std::map<std::string, int>::iterator it = employee.begin(); it != employee.end(); ++it)
    {
        //std::cout << it->first << it->second << std::endl;
    }
    
    for (auto it = employee.rbegin(); it != employee.rend(); ++it)
    {
        //std::cout << it->first << it->second << std::endl;
    }
    
    employee.insert({ "Alice", 4000 });
    employee.insert(std::make_pair("Mary", 5000));
    employee.erase("Bob");
    
    for (auto it = employee.begin(); it != employee.end(); ++it)
    {
        //std::cout << it->first << it->second << std::endl;
    }
    
    auto it = employee.find("John");
    
    if (it != employee.end())
    {
        //std::cout << "john is found" << it->second << std::endl;
    }
    
    std::vector<int> vec = { 1, 2, 3 };
    size_t element = vec.size();// 使用size_t接收容器大小
    
    for (size_t i = 0; i <= vec.size(); ++i)
    {
        //std::cout << vec[i] << std::endl;
    }
    
    // vector
    std::vector<int> numbers = { 1, 2, 3};
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        //std::cout << numbers[i] << " ";
    }
    
    for (int i = 0; i < numbers.size(); ++i)
    {
        //std::cout << numbers[i] << " ";
    }
    
    char array[10];   // 数组array能存储 10 个char类型的元素。
    size_t size = sizeof(array); // 获取数组的大小
    std::cout << "Size of array: " << size << std::endl;
    
    for (size_t i = 0; i < size; ++i) {
        array[i] = i; // 在数组中存储索引值
    }
    
    for (size_t i = 0; i < size; ++i) {
        //std::cout << "array[" << i << "] = " << static_cast<int>(array[i]) << std::endl;
    }
    
    // static_cast
    char c = 5;                         // 场景1：char转int（解决你代码中“输出ASCII字符而非数字”的问题）
    std::cout << "直接输出c：" << c << std::endl;          // 输出：空字符（ASCII码5是不可见字符）
    //std::cout << "static_cast<int>(c)：" << static_cast<int>(c) << std::endl;  // 输出：5
    
    int s = 3;                              // 场景2：int转double
    double v = static_cast<double>(s) / 2;  // 结果是1.5，而非1（避免整数除法）
    //std::cout << "v = " << v << std::endl;
    
    double d = 3.99;
    int e = static_cast<int>(d);      // 场景3：double转int（会截断小数部分，不是四舍五入）
    //std::cout << "e = " << e << std::endl;  // 输出：3  
}


