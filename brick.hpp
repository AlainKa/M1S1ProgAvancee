#ifndef __BRICK_HPP
#define __BRICK_HPP

#include <iostream>
#include "solidobject.hpp"

class Brick : public SolidObject
	{
        public:
		    Brick() {;}
		    Brick(Vec2<int> pos, int nNbrHit);
            virtual ~Brick();

            virtual void collide();
            int nbrHit;

        private:
            static SDL_Rect src;
	};



#endif
