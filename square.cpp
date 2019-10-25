#include "square.h"

Square::Square() : A{Point{}}, B{Point{}}, C{Point{}}, D{Point{}} {}

Square::Square(Point a, Point b, Point c, Point d) : A{a}, B{b}, C{c}, D{d} {}

Point Square::center() const {
	return Point{ (D.X() + A.X()) / 2, (B.Y() + A.Y()) / 2};
}

double Square::area() const {
	return length(D, A) * length(B, A);
}

std::ostream &Square::print(std::ostream &out) const {
	out << A << " " << B << " " << C << " " << D;

	return out;
}