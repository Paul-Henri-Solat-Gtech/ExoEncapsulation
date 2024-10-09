#include <iostream>
#include "Entity.h"

Entity::Entity(Vector2 position) : entityPosition(position)
{

}

Vector2 Entity::GetPosition() 
{
	return entityPosition;
}
float Entity::GetPositionX() {
	return GetPosition().GetPositionX();
}
float Entity::GetPositionY() {
	return GetPosition().GetPositionY();
}
void Entity::SetPosition(float x, float y) 
{
	entityPosition = Vector2(x,y);
}
