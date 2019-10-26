#include "rectangle.h"
#include "vector.h"

Rectangle::Rectangle() : A{Point{}}, B{Point{}}, C{Point{}}, D{Point{}} {}

Rectangle::Rectangle(Point a, Point b, Point c, Point d) : A{a}, B{b}, C{c}, D{d} {
	Vector AB{ A, B }, BC{ B, C }, CD { C, D }, DA { D, A };
	if (AB * BC || BC * CD || CD * DA || DA * AB) {
		throw std::logic_error("The sides of the rectangle should be perpendicular");
	} 
}

Point Rectangle::Center() const {
	return Point{ (B + D) / 2 };
}

double Rectangle::Area() const {
	return Length(D, A) * Length(B, A);
}

std::ostream &Rectangle::Print(std::ostream &out) const {
	out << "Rectangle: p1 = " << A << ", p2 = " << B << ", p3 = " << C << ", p4 = " << D;

	return out;
}

std::istream &Rectangle::Scan(std::istream &in) {
	in >> A >> B >> C >> D;
	(*this) = Rectangle(A, B, C, D);

	return in;
}