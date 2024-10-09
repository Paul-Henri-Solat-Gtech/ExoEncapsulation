#include <iostream>

#include "Integer.h"
#include "World.h"

int main(int argc, const char * argv[]) 
{
    //StaticObjet rock(Vector2(2.f,10.f));
    //BreakableObject box(Vector2(5.f,5.f),10.f);
    //Mob zombie(Vector2(60.f,40.f), 20.f, Vector2(4.f,1.f),5.f);
    //Player player(Vector2(1.f,1.f), 100.f, Vector2(5.f,2.f));
    //player.Move();
    //zombie.Move();
    //player.Attack(&zombie);
    //player.Attack(&box);

    World newWorld;
    newWorld.Step();


    Integer a(5);
    Integer b(2);
    a = a.Pow(2);
    std::cout << a.nb;

    return 0;
}
