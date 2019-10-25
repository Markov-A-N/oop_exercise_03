#ifndef RECTANGLE_H
#define RECTANGLE_H 1

#include "point.h"
#include "figure.h"

class Rectangle : public figure {
	Point A, B, C, D;
public:
	Rectangle();
	Rectangle(Point a, Point b, Point c, Point d);
	Point center() const override;
	double area() const override;
	std::ostream &print(std::ostream &out) const override; 
};

#endif //RECTANGLE_H