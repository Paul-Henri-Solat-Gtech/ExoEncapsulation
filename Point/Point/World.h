#ifndef world_h
#define world_h

#include <vector>

#include "Entity.h"
#include "StaticObjet.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

class World
{
public:
	World();
	void Init();
	void Step();

	std::vector<Entity*> entity_list;

private:

};


#endif