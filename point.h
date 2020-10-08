/*
* @File:    point.h
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-02 08:29:00
* @Summary: Declaration Class Point
*
* @Last Modified by:   d0m G
* @Last Modified time: 2020-10-08 11:42:11
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
        void updateX(double x);
        void updateY(double y);
        void update(double x, double y);
        void move(double dx, double dy);

        double distance(Point p) const;

    private:
        /* data */
        double _x;
        double _y;

    };

    double distance(Point a, Point b);
} // geometry





#endif // POINT_H




