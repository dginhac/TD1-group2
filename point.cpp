/*
* @File:    point.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-02 08:39:31
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-02 09:24:43
*/


#include "point.h"

namespace geometry {

    Point::Point() : _x(0.0), _y(0.0) {}
    Point::Point(double x, double y) : _x(x), _y(y) {}

    double Point::x() const {
        return _x;
    }
    double Point::y() const {
        return _y;
    }

} // geometry
