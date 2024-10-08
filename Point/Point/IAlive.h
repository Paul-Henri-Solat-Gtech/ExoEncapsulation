//
//  IAlive.h
//  point
//
//  Created by Maxine Constantinian on 08/10/2024.
//

#ifndef IALIVE_H__
#define IALIVE_H__

class IAlive {
    
public:
    virtual bool IsAlive() = 0;
    virtual void TakeDamage(int) = 0;
};

#endif
