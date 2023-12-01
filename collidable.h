#pragma once
#include "drawable.h"

//ahmed nasr
struct  collisionData
{
    bool collision = false;
    point collisionPoint;
};
//ahmed nasr


///////////////////////////////////////   collidable classes   /////////////////////////////////
//Base class for all collidable (objects that may collide with other objects)
class collidable :public drawable
{
public:
    collidable(point r_uprleft, int r_width, int r_height, game* r_pGame);

    virtual void collisionAction() = 0;    //action that should be performed upon collision
    //Ahmed Nasr

    virtual collisionData isColliding(const collidable* obj1, const collidable* obj2) const;

};

