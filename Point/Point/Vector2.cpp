#include "Vector2.h"

Vector2::Vector2(float x, float y):posX(x),posY(y) {

}

Vector2::Vector2(): posX(0), posY(0)
{

}

float Vector2::GetPositionX() {
	return posX;
}

void Vector2::SetPositionX(float x) {
	posX = x;
}

float Vector2::GetPositionY() {
	return posY;
}

void Vector2::SetPositionY(float y) {
	posY = y;
}