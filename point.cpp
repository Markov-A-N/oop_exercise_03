#include "point.h"
#include <cmath>

Point::Point() : x{0}, y{0} {}

Point::Point(double a, double b) : x{a}, y{b} {}

Point::Point(const Point &other) : x{other.x}, y{other.y} {}

double Point::X() const {
	return x;
}

double Point::Y() const {
	return y;
}

Point Point::operator/(double a) const {
	Point temp{*this};
	temp.x = x / 2;
	temp.y = y / 2;

	return temp;
}

double length(const Point &a, const Point &b) {
	return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

std::ostream &operator<<(std::ostream &out, const Point &a) {
	out << "(" << a.x << "; " << a.y << ")";
	return out;
}