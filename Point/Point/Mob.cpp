#include "Mob.h"

Mob::Mob(float x, float y, float hp, Vector2 direction, float speed) : Entity(Vector2(x, y)), Alive(hp), AMovable(direction, speed)
{

}

void Mob::TakeDamage(float dmg) 
{
	Alive::TakeDamage(dmg);
	std::cout << "Mob just die" << std::endl;
}

void Mob::Move() 
{
	//std::cout << "Mob move to x = "<< direction << " y = " << << std::endl;
}