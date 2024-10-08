//
//  Player.h
//  point
//
//  Created by Maxine Constantinian on 08/10/2024.
//

#ifndef PLAYER_H__
#define PLAYER_H__

#include "Entity.h"
#include "IAlive.h"

class Player : public Entity, public IAlive {
    int life;

public:
    Player();
    void sayHello() override;
    
    bool IsAlive() override;
    void TakeDamage(int _dmg) override;
};

#endif
