/*
* @File:    point.h
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-02 08:29:00
* @Summary: Declaration Class Point
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-02 09:02:59
*
*/

#ifndef POINT_H
#define POINT_H

namespace geometry {

    class Point {
    public:
        Point();
        Point(double x, double y);

        double x() const;
        double y() const;
    private:
        /* data */
        double _x;
        double _y;

    };
} // geometry





#endif // POINT_H




