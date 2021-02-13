#include <iostream>
using namespace std;

int main() {
	cout << endl;
	cout << "------- End Warnings " << endl;
	cout << endl;


	char s[20] = "abcdef";
	char *p;
	int i;

	for (p = s, i = 0; p[i]; i++) {
		p[i] = toupper(p[i]);
	}

	cout << s << endl;

	return 0;
}
