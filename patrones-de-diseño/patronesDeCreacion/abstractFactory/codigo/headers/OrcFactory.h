#include "SoldierFactory.h"

class OrcFactory : public SoldierFactory {
public:
	OrcFactory();
	Archer* MakeArcher() const;
	//Rider* MakeRider() {};
};
