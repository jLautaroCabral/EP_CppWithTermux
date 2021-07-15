#include <iostream>
using namespace std;

class Firearm {
public:
	virtual float noise() const = 0;
	virtual int bullets() const = 0;
};

class Rifle : public Firearm {
public:
	float noise() const { cout << "noise rifle" << endl; return 150.0; }
	int bullets() const { cout << "bullets rifle" << endl; return 5; }
};

/* Decorators */

class FirearmDecorator : public Firearm {
protected:
	Firearm * _gun;
public:
	FirearmDecorator(Firearm * gun) : _gun(gun) {}
	virtual float noise() const { cout << "noise decorator " << endl; return _gun->noise(); }
	virtual int bullets() const { cout << "bullets decorator " << endl; return _gun->bullets(); }
};

class Silencer : public FirearmDecorator {
public:
	Silencer(Firearm * gun) : FirearmDecorator(gun) {}
	float noise() const { cout << "noise silenciador" << endl; return _gun->noise() - 55; }
	int bullets() const { cout << "bullets silenciador " << endl; return _gun->bullets(); }
};

class Magazine : public FirearmDecorator {
public:
	Magazine(Firearm * gun) : FirearmDecorator(gun) {}
	float noise() const { cout << "noise megazine" << endl; return _gun->noise(); }
	int bullets() const { cout << "bullets megazine" << endl; return _gun->bullets() + 5; }
};

int main() {
	cout << "------------------------" << endl;
	/* Using decorators */
	Firearm * gun = new Rifle();
	cout << "Noise: " << gun->noise() << endl;
	cout << "Bullets: " << gun->bullets() << endl;

	cout << "------------------------" << endl;
	// char gets a silencer
	gun = new Silencer(gun);
	cout << "Noise: " << gun->noise() << endl;
	cout << "Bullets: " << gun->bullets() << endl;
	
	cout << "------------------------" << endl;
	// char gets a new megazine
	gun = new Magazine(gun);
	cout << "Noise: " << gun->noise() << endl;
	cout << "Bullets: " << gun->bullets() << endl;
	
	cout << "------------------------" << endl;
}
