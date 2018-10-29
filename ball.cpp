#include "ball.hpp"

SDL_Rect Ball::src = {80, 66, 16, 12};

Ball::Ball(Vec2<int> posMin,std::vector<PrintableObject*>* levelObject) : MovableObject(Ball::src, posMin, Vec2<int>(Ball::src.w, Ball::src.h), Vec2<int>(1, 1), levelObject)
	{

	}


Ball::Ball(Vec2<int> posMin, Vec2<int> nSpeed,std::vector<PrintableObject*>* levelObject) : MovableObject(Ball::src, posMin, Vec2<int>(Ball::src.w, Ball::src.h), nSpeed, levelObject)
	{

	}


Ball::~Ball() 
	{

	}
