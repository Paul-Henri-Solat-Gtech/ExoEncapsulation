#ifndef entity_h
#define entity_h

#include "Vector2.h"

class Entity {
protected:
    
public:
    Entity(Vector2 position);
    virtual Vector2 GetPosition();
    float GetPositionX();
    float GetPositionY();
    virtual void SetPosition(float x, float y);

private:
    Vector2 entityPosition;

};

#endif
