#include "Soldier.h"

Soldier::Soldier() {}

const char* Soldier::getName() const { return _name; }
void Soldier::setName(const char* name) { _name = name; }

int Soldier::getLife() const { return _life; }
void Soldier::setLife(int life) { _life = life; }
