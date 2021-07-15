#include <iostream>
using namespace std;

class Char {
protected:
	int _life;
	char* _name;
public:
	virtual int getLife() const = 0;
	virtual void setLife(int life) = 0;
};


class Soldier : Char {
public:
	Soldier() {}
	char* getName() const { return _name; }
	void setName(char* name) { _name = name; }

	int getLife() const { return _life; }
	void setLife(int life) { _life = life; }

	virtual void shot() const = 0;
};


class Archer : public Soldier {
public:
	Archer() {}
	void shot() const;
};
void Archer::shot() const {
	cout << "Arquero disparando" << endl;
}


class Rider : public Soldier {
public:
	void shot() const;
};
void Rider::shot() const {
	cout << "Asaltador disparando" << endl;
}	


class SoldierFactory {
public:
	virtual Archer* MakeArcher() const = 0;
	//virtual void MakeRider() = 0;
};


class OrcFactory : public SoldierFactory {
public:
	OrcFactory() {};
	Archer* MakeArcher() const;
	//Rider* MakeRider() {};
};
Archer* OrcFactory::MakeArcher() const {
	Archer* archer = new Archer();
	//archer->setName('Orc');

	return archer;
}

class ManFactory : public SoldierFactory {
public:
	ManFactory() {};
	Archer* MakeArcher() const;
	//Rider* MakeRider() {};
};
Archer* ManFactory::MakeArcher() const {
	Archer* archer = new Archer();

	return archer;
}


class Game {
public:
	void createSoldiers(SoldierFactory* factory);
};
void Game::createSoldiers(SoldierFactory* factory) {
	
}


int main() {
	Game game;
	SoldierFactory* factory;

	bool isSelectedMan = true;

	if(isSelectedMan) {
		factory = new ManFactory();
	} else {
		factory = new OrcFactory();
	}

	//Soldier* soldadoArquero = new Archer();
	Soldier* soldado = new Archer();
	//Archer arquero;

	//soldado = &arquero;
	soldado->setName("Robin");
	soldado->setLife(100);

	cout << "Arquero: Mi nombre es " << soldado->getName() << endl;
	cout << "Arquero: Mi vida es " << soldado->getLife() << endl;
	soldado->shot();

	//game.createSoldiers(factory);
	cout << "FIN: Prueba de compilacion de solo un ejecutable" << endl;
	return 0;
}
