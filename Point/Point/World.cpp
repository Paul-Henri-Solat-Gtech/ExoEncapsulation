#include "World.h"


World::World():finishedSimulation(false)
{

}

void World::Init() 
{
	StaticObjet* rock = new StaticObjet(Vector2(2.f, 10.f));
	BreakableObject* box = new BreakableObject(Vector2(5.f, 7.f), 1.f);
	Mob* zombie = new Mob(Vector2(10.f, -15.f), 20.f, Vector2(4.f, 1.f), 1.f);
	Player* character = new Player(Vector2(1.f, 1.f), 10.f, Vector2(5.f, 2.f),1.f);
	entity_list.push_back(rock);
	entity_list.push_back(box);
	entity_list.push_back(character);
	entity_list.push_back(zombie);
}

void World::Step() 
{
	Vector2 breakableObjPos(0.f,0.f);
	BreakableObject* actualBo = nullptr;
	Player* actualPlayer = nullptr;
	for(Entity *entity : entity_list)
	{
		std::cout << "Entity type: " << typeid(*entity).name() << std::endl;
		if (BreakableObject* breakableObject = dynamic_cast<BreakableObject*>(entity))
		{
			breakableObjPos = breakableObject->GetPosition();
			actualBo = breakableObject;
		}
		if (Player* player = dynamic_cast<Player*>(entity))
		{
			actualPlayer = player;
		}
		if (Mob* mob = dynamic_cast<Mob*>(entity)) 
		{
			if (mob->GetHp() <= 0 || actualBo->GetHp() <= 0)
			{
				std::cout << "Simulation Finished" << std::endl;
				finishedSimulation = true;
			}
			else
			{
				mob->Move(breakableObjPos);
				if (mob->GetHp() > 0 && actualPlayer != nullptr)
				{
					actualPlayer->Move(mob->GetPosition());

					if (actualPlayer->GetPosition() == mob->GetPosition())
					{
						std::cout << "Player as touched mob" << std::endl;

						if (mob->GetHp() > 0)
						{
							mob->TakeDamage(5.f);
						}
						else
						{
							if (actualPlayer->GetPosition() == actualBo->GetPosition())
							{
								if (actualBo->GetHp() > 0)
								{
									actualBo->TakeDamage(1.f);
								}
							}
							else
							{
								actualPlayer->Move(breakableObjPos);
							}

						}

					}
				}
			}
		}
	}
}