// Ejemplo de multiples excepciones
// SE OMITE EL RESTO DE CODIGO FUENTE
class Mesh {
public:
	void cargar(const char *archivo);
};

class Stream {
public:
	Stream(const char *archivo);	
};

class MiExcepcionIO {};
class MiExcepcionMatematica {};
class MiExcepcion {};

Stream::Stream(const char *archivo) {}

void cargar2(Stream arg) {}

void Mesh::cargar (const char *archivo) {
	try {
		Stream stream(archivo); // Puede generar un error de I/O
		cargar2(stream);
	}
	catch (MiExcepcionIO &e) {
		// Gestionar error I/O
	}
	catch (MiExcepcionMatematica &e) {
		// Gestionar error matematico
	}
	catch (MiExcepcion &e) {
		// Gestionar otro error
	}
	/*
	catch (...) {
		// Cualquier otro tipo de error
	}
	*/
}
