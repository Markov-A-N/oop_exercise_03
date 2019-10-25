#include "triangle.h"
#include "figure.h"
#include "point.h"

Triangle::Triangle() : A{Point{}}, B{Point{}}, C{Point{}} {}

Triangle::Triangle(Point a, Point b, Point c) : A{a}, B{b}, C{c} {}

Point Triangle::center() const {
	Point mid_of_base{ (C.X() + A.X()) / 2, (C.Y() + A.Y()) / 2 };
	Point center_point{ (B.X() + 2 * mid_of_base.X()) / 3, (B.Y() + 2 * mid_of_base.Y()) / 3 };

	return center_point;
}

double Triangle::area() const {
	double AB = length(B, A), BC = length(C, B), AC = length(C, A);
	double perim = AB + BC + AC; 

	return sqrt((perim / 2) * (perim / 2 - AB) * (perim / 2 - BC) * (perim / 2 - AC));
}

std::ostream &Triangle::print(std::ostream &out) const {
	out << A << " " << B << " " << C;

	return out;
}