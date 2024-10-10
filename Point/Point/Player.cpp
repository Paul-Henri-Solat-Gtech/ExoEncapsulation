#include "Player.h"

Player::Player(Vector2 position, float hp, Vector2 direction,float spe):Entity(position),Alive(hp), AMovable(direction),speed(spe)
{
	SetSpeed(speed);
	std::cout << "Player just created at x = " << position.GetPositionX() << " y = " << position.GetPositionY() << " with " << hp << " with direction x = " << direction.GetPositionX() << " and y = " << direction.GetPositionY() << std::endl;
}
Player::Player() :Entity(Vector2(0.f,0.f)), Alive(0), AMovable(Vector2(0.f, 0.f)), speed(0)
{
	SetSpeed(speed);
}

void Player::TakeDamage(float dmg) 
{
	Alive::TakeDamage(dmg);
	std::cout << "Player just died" << std::endl;
}

void Player::Move(Vector2 directionTo) 
{
	std::cout << "Player moved to x = " << direction.GetPositionX() << " and y = " << direction.GetPositionY() << std::endl;
	while (GetPosition() != directionTo)
	{
		if (GetPosition().GetPositionX() > directionTo.GetPositionX())
		{
			SetPosition((GetPositionX() - speed), GetPositionY());
			std::cout << "Player x:" << GetPositionX() << " y:" << GetPositionY() << std::endl;
		}
		if (GetPosition().GetPositionX() < directionTo.GetPositionX())
		{
			SetPosition((GetPositionX() + speed), GetPositionY());
			std::cout << "Player x:" << GetPositionX() << " y:" << GetPositionY() << std::endl;
		}

		if (GetPosition().GetPositionY() > directionTo.GetPositionY())
		{
			SetPosition(GetPositionX(), (GetPositionY() - speed));
			std::cout << "Player x:" << GetPositionX() << " y:" << GetPositionY() << std::endl;
		}
		if (GetPosition().GetPositionY() < directionTo.GetPositionY())
		{
			SetPosition(GetPositionX(),(GetPositionY() + speed));
			std::cout << "Player x:" << GetPositionX() << " y:" << GetPositionY() << std::endl;
		}
	}
	std::cout << "Player as reached the final point to x = " << directionTo.GetPositionX() << " and y = " << directionTo.GetPositionY() << std::endl;
}

void Player::Attack(Alive* alive) 
{
	std::cout << "Player just attacked" << std::endl;
	alive->TakeDamage(10.f);
}