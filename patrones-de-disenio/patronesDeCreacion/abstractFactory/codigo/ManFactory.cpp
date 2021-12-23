#include "ManFactory.h"

ManFactory::ManFactory() {}

Archer* ManFactory::MakeArcher() const {
	Archer* archer = new Archer();
	archer->setName("Man");
	archer->setLife(150);

	return archer;
}
