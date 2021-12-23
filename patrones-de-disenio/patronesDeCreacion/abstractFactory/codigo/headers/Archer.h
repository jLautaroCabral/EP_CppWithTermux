#ifndef ARCHER_H
#define ARCHER_H

#include "Soldier.h"

class Archer : public Soldier {
public:
	Archer();
	void shot() const;
};

#endif
