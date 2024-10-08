#ifndef alive_h
#define alive_h

class Alive
{
public:
	Alive(float life);

	virtual float GetMaxHp();
	virtual float GetHp();
	virtual void TakeDamage(float dmg);
	virtual void LoseLife(float dmg);

private:
	float hp, maxHp;
};


#endif
