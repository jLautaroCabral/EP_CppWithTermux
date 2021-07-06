#include <iostream>
using namespace std;

class Figura { // Clase abstracta Figura
public:
	virtual float area() const = 0; // Funcion virtual puta
};

class Circulo : public Figura {
public:
	Circulo(float r): _radio(r) {}
	void setRadio(float r) { _radio = r; }
	float getRadio() const { return _radio; }

	// Redefinicion de area () en Circulo
	float area() const { return _radio * _radio * 3.14; }

private:
	float _radio;
};

int main() {
	Figura *f;
	Circulo c(5.5);

	f = &c;
	cout << "Area: " << f->area() << endl;

	// Recuerde realizar un casting al acceder a una funcion especifica
	cout << "Radio: " << static_cast<Circulo*>(f)->getRadio() << endl;

	return 0;
}
