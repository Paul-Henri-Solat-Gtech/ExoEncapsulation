#ifndef vector2_h
#define vector2_h

#include<iostream>

class Vector2
{
public:
	Vector2(float x, float y);
	Vector2();

	virtual float GetPositionX();
	virtual void SetPositionX(float x);
	virtual float GetPositionY();
	virtual void SetPositionY(float y);

	Vector2 operator + (const Vector2& position);
	Vector2 operator - (const Vector2& position);
	Vector2 operator * (const Vector2& position);
	bool operator != (const Vector2& position);

private:
	float posX, posY;

};

#endif