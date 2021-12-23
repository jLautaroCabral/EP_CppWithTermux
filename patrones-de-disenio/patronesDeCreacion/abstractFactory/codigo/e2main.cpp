#include <iostream>

#include "Game.h"
#include "Soldier.h"
#include "Archer.h"
#include "SoldierFactory.h"
#include "ManFactory.h"
#include "OrcFactory.h"

using namespace std;

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
	
	//soldadp = &arquero;
	soldado->setName("Robin");
	soldado->setLife(100);

	cout << "Arquero: Mi nombre es " << soldado->getName() << endl;
	cout << "Arquero: Mi vida es " << soldado->getLife() << endl;

	//game.createSoldiers(factory);
	cout << "FIN: Prueba de compilacion modular" << endl;

	return 0;
}
