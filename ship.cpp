#include "ship.hpp"
#include <iostream>
		    
SDL_Rect Ship::src = {0, 0, 64, 24};

Ship::Ship(Vec2<int> pos,std::vector<PrintableObject*>* levelObject) : ControlableObject(Ship::src,pos,Vec2<int>(Ship::src.w, Ship::src.h),levelObject)
	{

	}

void Ship::checkCollisionWithBorder()
    {
        ControlableObject::checkCollisionWithBorder();
    }

void Ship::collide(Vec2<bool> v)
    {
        ControlableObject::collide(v);
    }


void Ship::getAction(SDL_Event event)
    {
        switch (event.type)
			{
            case SDL_KEYUP: speed = 0; break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					// touche clavier
                    case SDLK_LEFT:  {speed.x = -2;//std::cout<<this->posMin.x << '\t' << posMax.x << '\t'<<posMin.y << '\t' << posMax.y <<'\n';
                        } break;
                    case SDLK_RIGHT: {speed.x = 2; //std::cout<<this->posMin.x << '\t' << posMax.x << '\t'<<posMin.y << '\t' << posMax.y <<'\n';
                        } break;
					default: break;
				}
				break;
            //case SDL_MOUSEMOTION: speed.x = event.motion.xrel;	break;

			default: break;
			}

    
    }

void Ship::update()
    {
        ControlableObject::update();
    }

Ship::~Ship() 
	{

	}
