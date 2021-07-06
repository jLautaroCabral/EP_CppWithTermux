#include <stdio.h>
#include <iostream>
#include <memory>
using namespace std;

class Textura {
public:
	Textura() {}
};

// Ejemplo de wrapper
class FilePtr {
private:
	FILE *entrada;
public:
	FilePtr();
	FilePtr(const char *ruta, const char *mode);
	~FilePtr();

	FILE *getEntrada();
};

FilePtr::FilePtr() {}

FilePtr::FilePtr(const char *ruta, const char *mode) {
	entrada = fopen(ruta, mode);
}

FilePtr::~FilePtr() {
	fclose(entrada);
}

void leerTextura(FILE *in, Textura *pTextura) {
	// Etc...
}

void leerTextura2(FilePtr in, auto_ptr<Textura> *textura) {
	// Etc...
}

// Ejemplo 1 de uso adecuado de excepciones y liberacion de memoria
Textura *cargarTextura (const char *ruta) {
	FILE *entrada = NULL;
	Textura *pTextura = NULL;

	try {
		entrada = fopen(ruta, "rb");
		// Instanciar recursos locales...
		pTextura = new Textura(/*..., ...*/);
		leerTextura(entrada, pTextura);
	}
	catch (...) { // Liberar memoria ante un error
		delete pTextura;
		pTextura = NULL;
	}

	fclose(entrada);
	return pTextura;
}

// Ejemplo 2 de uso adecuado de excepciones y liberacion de memoria (simple)
auto_ptr<Textura> *cargarTextura2 (const char *ruta) {
	FilePtr entrada(ruta, "rb");
	// Instanciar recursos locales...
	auto_ptr<Textura> *pTextura = new auto_ptr<Textura>();

	leerTextura2(entrada, pTextura);

	return pTextura;
}

int main() {
	cout << "Hello World! 2" << endl;
}
