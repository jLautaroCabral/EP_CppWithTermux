#include <iostream>
using namespace std;
void end();
int main() {
	char s[20] = "hola mundo";
	char *p;
	int i;

	int edad = 10;

        end();
	cout << &edad << endl;
	end();

	for(p = s, i = 0; i < 20; i++) {
		// p=[i] = toupper(p[i]);
		cout << &s[i];
		end();
	}

	return 0;
}

void end() {
	cout << endl;
}
