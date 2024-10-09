#include "World.h"


World::World()
{
	Init();
}

void World::Init() 
{
	//StaticObjet rock(Vector2(2.f, 10.f));
	//BreakableObject box(Vector2(5.f, 5.f), 1.f);
	//Mob zombie(Vector2(60.f, 40.f), 20.f, Vector2(4.f, 1.f), 5.f);
	//Player player(Vector2(1.f, 1.f), 10.f, Vector2(5.f, 2.f));
	//entity_list.push_back(&rock);
	//entity_list.push_back(&box);
	//entity_list.push_back(&zombie);
	//entity_list.push_back(&player);

	StaticObjet* rock = new StaticObjet(Vector2(2.f, 10.f));
	BreakableObject* box = new BreakableObject(Vector2(5.f, 7.f), 1.f);
	Mob* zombie = new Mob(Vector2(60.f, 40.f), 20.f, Vector2(4.f, 1.f), 5.f);
	Player* player = new Player(Vector2(1.f, 1.f), 10.f, Vector2(5.f, 2.f));
	entity_list.push_back(rock);
	entity_list.push_back(box);
	entity_list.push_back(zombie);
	entity_list.push_back(player);
}

void World::Step() 
{
	Vector2 breakableObjPos(0.f,0.f);

	for(Entity *entity : entity_list)
	{
		//std::cout << "New Entity: " << entity << std::endl;
		if (BreakableObject* breakableObject = dynamic_cast<BreakableObject*>(entity))
		{
			std::cout << "BreakableObject Entity: " << entity << std::endl;
			breakableObjPos = breakableObject->GetPosition();
		}
		if (Mob* mob = dynamic_cast<Mob*>(entity)) 
		{
			std::cout << "Mob Entity: " << entity << std::endl;
			if (breakableObjPos != Vector2(0.f,0.f)) 
			{
				std::cout << "Mob found an object to destroy ! at x:" << breakableObjPos.GetPositionX() << " y:"<< breakableObjPos.GetPositionY() << std::endl;
				
			}
		}
		if (Player* player = dynamic_cast<Player*>(entity))
		{
			std::cout << "Player Entity: " << entity << std::endl;
		}
	}
}