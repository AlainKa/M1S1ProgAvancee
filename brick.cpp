#include "brick.hpp"

SDL_Rect Brick::src = {96, 48, 24, 16}; 

Brick::Brick(Vec2<int> pos, int nNbrHit) : SolidObject(src, pos, Vec2<int>(Brick::src.w, Brick::src.h)), nbrHit(nNbrHit)
	{

	}

void Brick::collide()
    {
        
        if (--nbrHit == 0) std::cout << "collide";
    }

Brick::~Brick() 
	{

	}
