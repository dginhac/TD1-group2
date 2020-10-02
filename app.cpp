/*
* @File:    app.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-02 08:45:48
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-02 09:25:56
*/

#include <iostream>

#include "point.h"
using geometry::Point;

int main()
{
    /* code */
    Point p1;
    Point p2(2.3, 5.6);

    std::cout << "p1 = (" << p1.x() << "," << p1.y() << ")" << std::endl;
    std::cout << "p2 = (" << p2.x() << "," << p2.y() << ")" << std::endl;
    std::cout << "bye!!" << std::endl;
    return 0;
}
