/*
* @File:    point.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-02 08:39:31
* @Summary:
*
* @Last Modified by:   d0m G
* @Last Modified time: 2020-10-08 11:42:10
*/


#include <cmath>
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
    void Point::updateX(double x) {
        _x = x;
    }
    void Point::updateY(double y) {
        _y = y;
    }
    void Point::update(double x, double y) {
        updateX(x);
        updateY(y);
    }
    void Point::move(double dx, double dy) {
        update(x()+dx,y()+dy);
    }

    double Point::distance(Point p) const {
        double dx = x() - p.x();
        double dy = y() - p.y();
        return sqrt(dx*dx + dy*dy);
    }

    double distance(Point a, Point b) {
        return a.distance(b);
    }


} // geometry
