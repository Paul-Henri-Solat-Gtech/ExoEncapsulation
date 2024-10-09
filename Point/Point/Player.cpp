#include "Player.h"

Player::Player(Vector2 position, float hp, Vector2 direction):Entity(position),Alive(hp), AMovable(direction)
{
	std::cout << "Player just created at x = " << position.GetPositionX() << " y = " << position.GetPositionY() << " with " << hp << " with direction x = " << direction.GetPositionX() << " and y = " << direction.GetPositionY() << std::endl;
}

void Player::TakeDamage(float dmg) 
{
	Alive::TakeDamage(dmg);
	std::cout << "Player just died" << std::endl;
}

void Player::Move() 
{
	AMovable::Move();
	std::cout << "Player moved to x = " << direction.GetPositionX() << " and y = " << direction.GetPositionY() << std::endl;
}

void Player::Attack(Alive* alive) 
{
	IAttacker::Attack(alive);
	alive->TakeDamage(10.f);
	std::cout << "Player just attacked" << std::endl;
}