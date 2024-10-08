#include "BreakableObject.h"

BreakableObject::BreakableObject(float x, float y, float hp):Entity(Vector2(x,y)),Alive(hp)
{
	std::cout << "Breakable Object just created at x = " << GetPosition().GetPositionX() << "and y = "<< GetPosition().GetPositionY() <<"with "<< GetHp() << std::endl;
}

void BreakableObject::TakeDamage(float dmg) 
{
	Alive::TakeDamage(dmg);
	std::cout << "Breakable Object just broke" << std::endl;
}