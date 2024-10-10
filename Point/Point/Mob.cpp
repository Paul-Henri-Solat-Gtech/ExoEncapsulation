#include "Mob.h"

Mob::Mob(Vector2 position, float hp, Vector2 direction, float speed) : Entity(position), Alive(hp), AMovable(direction, speed)
{
	std::cout << "Mob just created at x = "<< position.GetPositionX() <<" y = "<< position.GetPositionY() <<" with ici-la-maxlife life "<< hp <<" with direction x = "<< direction.GetPositionX()<<" and y = " << direction.GetPositionY() << std::endl;
}

void Mob::TakeDamage(float dmg) 
{
	Alive::TakeDamage(dmg);
	std::cout << "Mob has taken dammage !" << std::endl;
}

void Mob::Move(Vector2 directionTo)
{
	std::cout << "Mob moved to x = "<< direction.GetPositionX() << " y = " << direction.GetPositionY() << std::endl;
	while (GetPosition() != directionTo)
	{
		if (GetPosition().GetPositionX() > directionTo.GetPositionX())
		{
			SetPosition((GetPositionX() - speed), GetPositionY());
			std::cout << "Mob x:" << GetPositionX() << " y:" << GetPositionY() << std::endl;
		}
		if (GetPosition().GetPositionX() < directionTo.GetPositionX())
		{
			SetPosition((GetPositionX() + speed), GetPositionY());
			std::cout << "Mob x:" << GetPositionX() << " y:" << GetPositionY() << std::endl;
		}

		if (GetPosition().GetPositionY() > directionTo.GetPositionY())
		{
			SetPosition(GetPositionX(), (GetPositionY() - speed));
			std::cout << "Mob x:" << GetPositionX() << " y:" << GetPositionY() << std::endl;
		}
		if (GetPosition().GetPositionY() < directionTo.GetPositionY())
		{
			SetPosition(GetPositionX(), (GetPositionY() + speed));
			std::cout << "Mob x:" << GetPositionX() << " y:" << GetPositionY() << std::endl;
		}
	}
	std::cout << "Mob as reached the final point to x = " << directionTo.GetPositionX() << " and y = " << directionTo.GetPositionY() << std::endl;
}