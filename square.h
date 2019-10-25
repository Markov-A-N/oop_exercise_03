#ifndef SQUARE_H
#define SQUARE_H 1

#include "point.h"
#include "figure.h"

class Square : public figure {
	Point A, B, C, D;
public:
	Square();
	Square(Point a, Point b, Point c, Point d);
	Point center() const override;
	double area() const override;
	std::ostream &print(std::ostream &out) const override; 
};

#endif //SQUARE_H