#ifndef iattacker_h
#define iattacker_h

#include "Alive.h"

class IAttacker
{
public:
	virtual void Attack(Alive* alive) = 0;

private:

};

#endif