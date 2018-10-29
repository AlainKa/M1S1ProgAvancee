#include "printableobject.hpp"

SDL_Surface * PrintableObject::spriteTemplate = SDL_LoadBMP("./data/Arkanoid_sprites.bmp");
SDL_Surface * PrintableObject::surfaceWindow = nullptr;

PrintableObject::PrintableObject(SDL_Rect Sprite)
	{
        src = Sprite;
	}


PrintableObject::PrintableObject(SDL_Rect Sprite, Vec2<int> posMin, Vec2<int> dim)
	{
        this->posMin=posMin;
        this->dim=dim;
        posMax=posMin+dim;

        src=Sprite;
	}


PrintableObject::~PrintableObject() 
	{

	}


void PrintableObject::display()
    {
        SDL_Rect r = {posMin.x, posMin.y, dim.x, dim.y};
        SDL_BlitSurface(PrintableObject::spriteTemplate, &src, PrintableObject::surfaceWindow, &r);
    }

void PrintableObject::display(Vec2<int> posMin)
    {
        SDL_Rect r = {posMin.x, posMin.y, dim.x, dim.y};
        SDL_BlitSurface(PrintableObject::spriteTemplate, &src, PrintableObject::surfaceWindow, &r);
    }
