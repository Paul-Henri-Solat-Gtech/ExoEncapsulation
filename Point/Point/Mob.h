#ifndef mob_h
#define mob_h

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob: public Entity, public Alive, public AMovable
{
public:
	Mob(float x, float y, float hp, Vector2 direction, float speed);

	void TakeDamage(float dmg) override;
	void Move() override;
private:

};

#endif