#ifndef SOLDIER_H
#define SOLDIER_H

#include "Char.h"

class Soldier : Char {
public:
        Soldier();

        const char* getName() const;
        void setName(const char* name);

        int getLife() const;
        void setLife(int life);

        virtual void shot() const = 0;
};

#endif
