#ifndef __SHIP_HPP
#define __SHIP_HPP

#include <iostream>
#include "controlableobject.hpp"

class Ship : public ControlableObject
	{
        public:
            Ship() {;}
            Ship(Vec2<int> pos,std::vector<PrintableObject*>* levelObject);
		    ~Ship();

            virtual void checkCollisionWithBorder();
            virtual void collide(Vec2<bool> v);
            virtual void getAction(SDL_Event event);
            virtual void update();

	    private:
            static SDL_Rect src;
	};



#endif
