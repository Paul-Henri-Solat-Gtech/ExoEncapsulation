#include <iostream>

#include "Integer.h"
#include "World.h"

int main(int argc, const char * argv[]) 
{
    //Integer a(5);
    //Integer b(2);
    //a = a.Pow(2);
    //std::cout << a.nb;

    World newWorld;
    newWorld.Init();

    while (newWorld.finishedSimulation != true)
    {
        newWorld.Step();
    }

    return 0;
}
