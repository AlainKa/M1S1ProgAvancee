#include "solidobject.hpp"
#include "movableobject.hpp"
#include <iostream>
SolidObject::SolidObject(SDL_Rect sprite, Vec2<int> pos, Vec2<int> dim) : PrintableObject(sprite, pos, dim)
	{

	}

void SolidObject::update()
    {
        //collision
        PrintableObject::update();
    }


SolidObject::~SolidObject() 
	{

	}

void SolidObject::checkCollisionWith(MovableObject *incomingobject, Vec2<int> incomingpos)
    {
            if(incomingobject!=this)
            {
                bool incomingXWithinXRange = incomingpos.x >= posMin.x && incomingpos.x <= posMax.x;
                bool incomingYWithinYRange = incomingpos.y >= posMin.y && incomingpos.y <= posMax.y;
                bool oldIncomingXwithinXRange = incomingobject->posMin.x >= posMin.x && incomingobject-> posMin.x <= posMax.x ;
                bool oldIncomingYwithinYRange = incomingobject->posMin.y >= posMin.y && incomingobject-> posMin.y <= posMax.y ;
                Vec2<bool> collision_axes;
                if(incomingXWithinXRange && incomingYWithinYRange)
                {
                    //std::cout<<incomingpos.x << '\t'<< incomingpos.y << '\t'<< incomingpos.x << '\t'<< posMin.x << '\t'<< posMax.x << '\t'<< posMin.y << '\t'<< posMax.y <<'\n';
                    collision_axes.x=oldIncomingXwithinXRange;
                    collision_axes.y=oldIncomingYwithinYRange;
                    incomingobject->collide(collision_axes);
                    collide(collision_axes);
                }
            }
    }
