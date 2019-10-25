#include "rectangle.h"

Rectangle::Rectangle() : A{Point{}}, B{Point{}}, C{Point{}}, D{Point{}} {}

Rectangle::Rectangle(Point a, Point b, Point c, Point d) : A{a}, B{b}, C{c}, D{d} {}

Point Rectangle::center() const {
	return Point{ (D.X() + A.X()) / 2, (B.Y() + A.Y()) / 2};
}

double Rectangle::area() const {
	return length(D, A) * length(B, A);
}

std::ostream &Rectangle::print(std::ostream &out) const {
	out << A << " " << B << " " << C << " " << D;

	return out;
}