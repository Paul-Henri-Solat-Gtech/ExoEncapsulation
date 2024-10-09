#include "StaticObjet.h"

StaticObjet::StaticObjet(Vector2 position): Entity(position)
{
	std::cout << "Static Object just created at x = " << position.GetPositionX() << " and y = " << position.GetPositionY() << std::endl;
}