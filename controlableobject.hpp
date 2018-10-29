#ifndef __CONTROLABLEOBJECT_HPP
#define __CONTROLABLEOBJECT_HPP

#include <iostream>
#include "movableobject.hpp"

class ControlableObject : public MovableObject
	{
        public:
            ControlableObject() {;}
            ControlableObject(SDL_Rect sprite, Vec2<int> pos, Vec2<int> dim,std::vector<PrintableObject*>* levelObject);
		    ~ControlableObject();

            virtual void checkCollisionWithBorder();
            virtual void collide(Vec2<bool> v);
            virtual void getAction(SDL_Event event) {;}
            virtual void update();

        //todo
	};



#endif
