#ifndef amovable_h
#define amovable_h

#include "Vector2.h"

class AMovable
{
public:
	AMovable(Vector2 dir, float spe);
	AMovable(Vector2 dir);

	virtual void SetDirection();
	virtual void SetSpeed();
	virtual void Move() = 0;

protected:
	Vector2 direction;

private:
	float speed;
};


#endif
