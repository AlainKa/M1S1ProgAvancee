#ifndef __SOLIDOBJECT_HPP
#define __SOLIDOBJECT_HPP

#include <iostream>
#include "printableobject.hpp"

class MovableObject;
class SolidObject : public PrintableObject
	{
        public:
            SolidObject() {;}
		    SolidObject(SDL_Rect sprite, Vec2<int> pos, Vec2<int> dim);
		    virtual ~SolidObject();
            
            virtual void update();
            virtual void collide(Vec2<bool> v) {return;}


            virtual bool canCollide() {return true;}
            void checkCollisionWith(MovableObject *incomingObjec, Vec2<int> pos);
    };



#endif
