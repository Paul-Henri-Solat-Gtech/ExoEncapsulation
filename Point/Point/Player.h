#ifndef player_h
#define player_h

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player: public Entity, public Alive, public AMovable, public IAttacker
{
public:
	Player(Vector2 position, float hp, Vector2 direction, float spe);
	Player();
	void TakeDamage(float dmg) override;
	void Move(Vector2 directionTo) override;
	void Attack(Alive* alive) override;
private:
	float speed;
};


#endif
