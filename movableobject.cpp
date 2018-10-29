#include "movableobject.hpp"
#include "engine.hpp"

MovableObject::MovableObject(SDL_Rect sprite, Vec2<int> pos, Vec2<int> dim,std::vector<PrintableObject*>* levelObject):SolidObject(sprite, pos, dim)
    {
        this->levelObject=levelObject;
    } 
MovableObject::MovableObject(SDL_Rect sprite, Vec2<int> pos, Vec2<int> dim, Vec2<int> nSpeed,std::vector<PrintableObject*>* levelObject):SolidObject(sprite, pos,dim), speed(nSpeed), levelObject(levelObject)
    {
        this->levelObject=levelObject;
    } 

void MovableObject::checkCollisionWithBorder()
    {
        if(posMin.x<0)
        {
            posMin.x=Engine::dim.x;
            posMax.x=posMin.x+dim.x;
        }
        if(posMin.y<0)
        {
            posMin.y=0;
            speed.y*=-1;
            posMax.y=posMin.y+dim.y;
        }
        if(posMin.x>Engine::dim.x)
        {
            posMin.x=0;
            posMax.x=posMin.x+dim.x;
        }
        if(posMin.y>Engine::dim.y)
        {
            posMin.y=0;
            posMax.y=posMin.y+dim.y;
        }
    }

void MovableObject::collide(Vec2<bool> v)
    {
        speed.x *= v.x?-1:1;        
        speed.y *= v.y?-1:1;        
    }



void MovableObject::update()
    {
        checkCollision();
        SolidObject::update();
        posMin+=speed;
        posMax+=speed;
        checkCollisionWithBorder();

    }

void MovableObject::checkCollision()
    {
        SolidObject* maycollide;
        for(int i = 0; i < static_cast<int>((*levelObject).size()); i++)
        {
            maycollide = dynamic_cast<SolidObject*>((* levelObject)[i]);
            if(maycollide!=nullptr)
            {
                maycollide->checkCollisionWith(this,posMin+speed);
            }

        }
    }


MovableObject::~MovableObject() 
	{

	}
