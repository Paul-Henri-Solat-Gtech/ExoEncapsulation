#ifndef vector2_h
#define vector2_h

#include<iostream>

class Vector2
{
public:
	Vector2(float x, float y);

	virtual float GetPositionX();
	virtual void SetPositionX(float x);
	virtual float GetPositionY();
	virtual void SetPositionY(float y);

private:
	float posX, posY;
};

#endif