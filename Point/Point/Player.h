#ifndef player_h
#define player_h

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player: public Entity, public Alive, public AMovable, public IAttacker
{
public:
	Player(Vector2 position, float hp, Vector2 direction, float speed);
	void TakeDamage(float dmg) override;
	void Move() override;
	void Attack(Alive* alive) override;
private:
	float speed;
};


#endif
