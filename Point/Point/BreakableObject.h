#ifndef breakableobject_h
#define breakableobject_h

#include "Entity.h"
#include "Alive.h"

class BreakableObject: public Entity, public Alive
{
public:
	BreakableObject(float x, float y, float hp);
	void TakeDamage(float dmg) override;

private:

};



#endif