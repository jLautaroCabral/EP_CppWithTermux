#include <iostream>
using namespace std;

template<class T> // Tipo general T
void swap(T &a, T &b) {
	 T aux(b);
	 a = b;
	 b = aux;
}

int main() {
	string a = "Hello", b = "Good-bye";
	cout << "[" << a << ", " << b << "]" << endl;

	swap(a, b); // Se instancia para cadenas
	cout << "[" << a << ", " << b << "]" << endl;

	return 0;
}
