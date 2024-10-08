#include <iostream>
#include "Entity.h"

Entity::Entity(Vector2 position) : entityPosition(position)
{

}

Vector2 Entity::GetPosition() 
{
	return entityPosition;
}
void Entity::SetPosition(float x, float y) 
{
	entityPosition = Vector2(x,y);
}
