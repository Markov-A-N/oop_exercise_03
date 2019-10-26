#ifndef VECTOR_H
#define VECTOR_H 1

#include "point.h"

class Vector {
public:
	double x, y;
	Vector(double x_cord, double y_cord);
	Vector(Point &p1, Point &p2);
	double operator*(const Vector &a) const;
};
	double Length(const Point &a, const Point &b);
	double Length(const Vector &a);

#endif// VECTOR_H