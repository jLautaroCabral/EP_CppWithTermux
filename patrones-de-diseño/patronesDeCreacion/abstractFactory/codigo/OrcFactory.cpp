#include "OrcFactory.h"

OrcFactory::OrcFactory() {}

Archer* OrcFactory::MakeArcher() const {
	Archer* archer = new Archer();
	archer->setName("Orc");
	archer->setLife(180);

	return archer;
}
