#include <iostream>

#include <Square.h>
#include <Triangle.h>
#include <Circle.h>

using namespace std;

int main() {
	Square square(5);
	Triangle triangle(5,10);
	Circle circle(10);

	cout << "Square area: " << square.getArea() << endl;
	cout << "Triangle area: " << triangle.getArea() << endl;
	cout << "Circle area: " << circle.getArea() << endl;

	return 0;
}
