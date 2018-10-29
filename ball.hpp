#ifndef __BALL_HPP
#define __BALL_HPP

#include <iostream>
#include "movableobject.hpp"

class Ball : public MovableObject
	{
        public:
		    Ball() {;}
            Ball(Vec2<int> nPos,std::vector<PrintableObject*>* levelObject);
            Ball(Vec2<int> nPos, Vec2<int> nSpeed,std::vector<PrintableObject*>* levelObject);
		    ~Ball();

        
            virtual bool canCollide() {return true;}
        private:
            static SDL_Rect src;
	};



#endif
