#include "Player.h"

Player::Player(Vector2 position, float hp, Vector2 direction,float speed):Entity(position),Alive(hp), AMovable(direction)
{
	SetSpeed(speed);
	std::cout << "Player just created at x = " << position.GetPositionX() << " y = " << position.GetPositionY() << " with " << hp << " with direction x = " << direction.GetPositionX() << " and y = " << direction.GetPositionY() << std::endl;
}

void Player::TakeDamage(float dmg) 
{
	Alive::TakeDamage(dmg);
	std::cout << "Player just died" << std::endl;
}

void Player::Move() 
{
	std::cout << "Player moved to x = " << direction.GetPositionX() << " and y = " << direction.GetPositionY() << std::endl;
	while (GetPosition() != direction) 
	{
		if (GetPosition().GetPositionX() > direction.GetPositionX()) 
		{
			SetPosition(Vector2(GetPositionX() + speed));


		}
	}
}

void Player::Attack(Alive* alive) 
{
	std::cout << "Player just attacked" << std::endl;
	alive->TakeDamage(10.f);
}