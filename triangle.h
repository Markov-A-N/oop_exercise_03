#ifndef TRIANGLE_H
#define TRIANGLE_H 1

#include "point.h"
#include "figure.h"
#include <cmath>

class Triangle : public figure {
	Point A, B, C;
public:
	Triangle();
	Triangle(Point a, Point b, Point c);
	Point center() const override;
	double area() const override;
	std::ostream &print(std::ostream &out) const override; 
};

#endif //TRIANGLE_H