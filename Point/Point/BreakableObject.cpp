#include "BreakableObject.h"

BreakableObject::BreakableObject(Vector2 position, float hp):Entity(position),Alive(hp)
{
	std::cout << "Breakable Object just created at x = " << position.GetPositionX() << "and y = "<< position.GetPositionY() <<"with "<< GetHp() << std::endl;
}

void BreakableObject::TakeDamage(float dmg) 
{
	Alive::TakeDamage(dmg);
	std::cout << "Breakable Object just got hit !" << std::endl;
}