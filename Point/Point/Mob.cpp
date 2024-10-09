#include "Mob.h"

Mob::Mob(Vector2 position, float hp, Vector2 direction, float speed) : Entity(position), Alive(hp), AMovable(direction, speed)
{
	std::cout << "Mob just created at x = "<< position.GetPositionX() <<" y = "<< position.GetPositionY() <<" with ici-la-maxlife life "<< hp <<" with direction x = "<< direction.GetPositionX()<<" and y = " << direction.GetPositionY() << std::endl;
	Move();
}

void Mob::TakeDamage(float dmg) 
{
	Alive::TakeDamage(dmg);
	std::cout << "Mob just die" << std::endl;
}

void Mob::Move() 
{
	AMovable::Move();
	std::cout << "Mob move to x = "<< direction.GetPositionX() << " y = " << direction.GetPositionY() << std::endl;
}