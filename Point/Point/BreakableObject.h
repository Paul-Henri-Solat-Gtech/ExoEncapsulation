#ifndef breakableobject_h
#define breakableobject_h

#include "Entity.h"
#include "Alive.h"

class BreakableObject: public Entity, public Alive
{
public:
	BreakableObject(Vector2 position, float hp);
	void TakeDamage(float dmg) override;

private:

};



#endif