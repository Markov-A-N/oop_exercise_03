#ifndef FIGURE_H
#define FIGURE_H 1

#include "point.h"
#include <iostream>

class figure {
public:
	virtual Point center() const = 0;
	virtual double area() const = 0;
	virtual std::ostream &print(std::ostream &) const = 0; 
};

#endif //FIGURE_H