#include "StaticObjet.h"

StaticObjet::StaticObjet(float x, float y): Entity(Vector2(x,y))
{
	std::cout << "Static Object just created at x = " << GetPosition().GetPositionX() << " and y = " << GetPosition().GetPositionY() << std::endl;
}