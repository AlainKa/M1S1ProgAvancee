#ifndef __PRINTABLEOBJECT_HPP
#define __PRINTABLEOBJECT_HPP

#include <iostream>
#include <cassert>
#include <vector>
#include <SDL2/SDL.h>
#include "vec2.hpp"

class PrintableObject
	{
        public:
		    PrintableObject() {;}
		    PrintableObject(SDL_Rect sprite);
            PrintableObject(SDL_Rect sprite, Vec2<int> posMin, Vec2<int> dim);
		    virtual ~PrintableObject();
       
            virtual void update() {display();}

            void display();
            void display(Vec2<int> posMin);

            virtual bool canCollide() {return false;}

            Vec2<int> posMin,posMax,dim;
        
            static SDL_Surface * spriteTemplate;
            static SDL_Surface* surfaceWindow;
            
        private:
            SDL_Rect src; //where to find sprite on spriteTemplate (x, y, w, h)
	};



#endif
