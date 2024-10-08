#ifndef amovable_h
#define amovable_h

#include "Vector2.h"

class AMovable
{
public:
	AMovable(Vector2 dir, float spe);

	virtual void SetDirection();
	virtual void SetSpeed();
	virtual void Move() = 0;

private:
	Vector2 direction;
	float speed;
};


#endif
