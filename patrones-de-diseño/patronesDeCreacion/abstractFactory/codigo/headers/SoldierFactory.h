#ifndef SOLDIER_FACTORY_H
#define SOLDIER_FACTORY_H

#include "Archer.h"

class SoldierFactory {
public:
	virtual Archer* MakeArcher() const = 0;
	//virtual void MakeRider() = 0;
};

#endif
