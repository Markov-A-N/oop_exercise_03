#include "vector.h"
#include "point.h"
#include <cmath>

Vector::Vector(double x_cord, double y_cord) : x{x_cord}, y{y_cord} {}

Vector::Vector(Point &p1, Point &p2) : x{p2.X() - p1.X()}, y{p2.Y() - p1.Y()} {}

double Vector::operator*(const Vector &a) const {
	return (x * a.x) + (y * a.y);
}

double Length(const Point &a, const Point &b) {
	return sqrt(pow((b.X() - a.X()), 2) + pow((b.Y() - a.Y()), 2));
}

double Length(const Vector &a) {
	return sqrt(pow(a.x, 2) + pow(a.y, 2));
}