#ifndef mob_h
#define mob_h

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob: public Entity, public Alive, public AMovable
{
public:
	Mob(Vector2 position, float hp, Vector2 direction, float speed);

	void TakeDamage(float dmg) override;
	void Move(Vector2 directionTo) override;
private:

};

#endif