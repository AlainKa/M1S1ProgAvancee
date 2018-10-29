#ifndef __MOVABLEOBJECT_HPP
#define __MOVABLEOBJECT_HPP

#include <iostream>
#include "solidobject.hpp"



class MovableObject : public SolidObject
	{
        public:

		    MovableObject() {;}
            MovableObject(SDL_Rect sprite, Vec2<int> pos, Vec2<int> dim,std::vector<PrintableObject*>* levelObject);
            MovableObject(SDL_Rect sprite, Vec2<int> pos, Vec2<int> dim, Vec2<int> nSpeed, std::vector<PrintableObject*>* levelObject);
		    virtual ~MovableObject();

            virtual void update();
            virtual void checkCollisionWithBorder();
            virtual void collide(Vec2<bool> v);
            Vec2<int> speed;
            std::vector<PrintableObject*>* levelObject;
        private:
           void checkCollision();

	};



#endif
