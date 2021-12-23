#ifndef MAN_FACTORY_H
#define MAN_FACTORY_H

#include "SoldierFactory.h"

class ManFactory : public SoldierFactory {
public:
	ManFactory();
	Archer* MakeArcher() const;				
	//Rider* MakeRider() {};
};

#endif
