#include <iostream>
using namespace std;

void swap (int &a, int &b);

// Ejemplo de referencias, funcion swap
int main() {
	int x = 7, y = 13;
	cout << "[" << x << ", " << y << "]" << endl;
	swap(x, y);
	cout << "[" << x << ", " << y << "]" << endl;

	return 0;
}

void swap(int &a, int &b) {
	int aux;

	aux = a;
	a = b;
	b = aux;
}
