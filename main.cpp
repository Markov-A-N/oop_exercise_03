#include "point.h"
#include "figure.h"
#include "triangle.h"
#include "square.h"
#include "rectangle.h"

int main() {
	/*Point a{-2, 0}, b{0, 2 * sqrt(3)}, c{2, 0};

	Triangle tr{a, b, c};
	std::cout << tr.center() << std::endl;
	std::cout << tr.area() << std::endl;
	tr.print(std::cout);
	std::cout << std::endl;*/
	
	Point a{-2, -2}, b{-2, 4}, c{2, 4}, d{2, -2};

	Rectangle sq{a, b, c, d};
	std::cout << sq.center() << std::endl;
	std::cout << sq.area() << std::endl;
	sq.print(std::cout);
	std::cout << std::endl;

	return 0;
}