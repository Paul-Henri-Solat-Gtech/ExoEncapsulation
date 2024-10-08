//
//  Player.cpp
//  point
//
//  Created by Maxine Constantinian on 08/10/2024.
//

#include <iostream>
#include "Player.h"

Player::Player() : Entity(), life(10) {

}

bool Player::IsAlive() {
    if (life > 0) {
        return true;
    }
    
    return false;
}

void Player::TakeDamage(int _dmg) {
    life -= _dmg;
}

void Player::sayHello() {
    std::cout << "Hello from Player" << std::endl;
}
