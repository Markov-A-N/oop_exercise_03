#ifndef SQUARE_H
#define SQUARE_H 1

#include "point.h"
#include "figure.h"
#include "vector.h"

class Square : public Figure {
	Point A, B, C, D;
public:
	Square();
	Square(Point a, Point b, Point c, Point d);
	Point Center() const override;
	double Area() const override;
	std::ostream &Print(std::ostream &out) const override; 
	std::istream &Scan(std::istream &in) override;
};

#endif //SQUARE_H