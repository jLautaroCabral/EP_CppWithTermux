#include <iostream>
using namespace std;

class A {
	int *_valor;
public:
	A(int valor);
	A(const A &obj);
	~A();

	int getValor() const { return *_valor; }
};

A::A(int valor) {
	cout << "Constructor..." << endl;
	_valor = new int;
	*_valor = valor;
}

A::A(const A &obj) {
	cout << "Constructor copia" << endl;
	_valor = new int;
	*_valor = obj.getValor();
}

A::~A() {
	cout << "Destruyendo..."  << endl;
	delete _valor;
}

void mostrar(A a) {
	cout << a.getValor() << endl;
}

int main() {
	A a(7);
	mostrar(a);
	return 0;
}

