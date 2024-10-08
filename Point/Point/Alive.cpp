#include "Alive.h"

Alive::Alive(float lifeMax):maxHp(lifeMax)
{
	hp = maxHp;
}

float Alive::GetMaxHp() 
{
	return maxHp;
}
float Alive::GetHp()
{
	return hp;
}

void Alive::TakeDamage(float dmg) 
{
	LoseLife(dmg);
}

void Alive::LoseLife(float dmg)
{
	hp -= dmg;
}