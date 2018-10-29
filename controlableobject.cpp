#include "controlableobject.hpp"

ControlableObject::ControlableObject(SDL_Rect sprite, Vec2<int> pos, Vec2<int> dim, std::vector<PrintableObject*>* levelObject) : MovableObject(sprite, pos, dim, levelObject)
	{
        
	}

ControlableObject::~ControlableObject() 
	{

	}

void ControlableObject::checkCollisionWithBorder()
    {
        MovableObject::checkCollisionWithBorder();
    }

void ControlableObject::collide(Vec2<bool> v)
    {

    }


void ControlableObject::update()
    {
        MovableObject::update();
    }
