#include "engine.hpp"

SDL_Window * Engine::window = nullptr;

Vec2<int> Engine::dim=Vec2<int>(600,600);


Engine::Engine()
    {
        levelObject=new std::vector<PrintableObject*>();
        SDL_Rect r = {64,128, 64, 64};
        fond = PrintableObject(r, Vec2<int>(0, 0), Vec2<int>(r.w, r.h)); 
        controlers.push_back(new Ship(Vec2<int>(PrintableObject::surfaceWindow->w/2, PrintableObject::surfaceWindow->h-30),levelObject));
        levelObject->push_back(new Ball(Vec2<int>(PrintableObject::surfaceWindow->w/2, PrintableObject::surfaceWindow->h/2),levelObject));
        levelObject->push_back(new Brick(Vec2<int>(20, 40), 1));
        levelObject->push_back(new Brick(Vec2<int>(30, 50), 1));
        levelObject->push_back(new Brick(Vec2<int>(50, 60), 1));
        levelObject->push_back(new Brick(Vec2<int>(60, 70), 1));
        levelObject->push_back(new Brick(Vec2<int>(70, 80), 1));
        levelObject->push_back(controlers[0]);
	}

void Engine::update()
    {
        for (int i = 0; i < dim.x; i += fond.dim.x) 
            for (int j = 0; j < dim.y; j += fond.dim.y)
                    fond.display(Vec2<int>(i, j));   

        
        SDL_PollEvent(&event);

        for (int i=0; i < static_cast<int>(controlers.size()); i++)
            controlers[i]->getAction(event);
        for (int i=0; i < static_cast<int>(levelObject->size()); i++)
            {
                (*levelObject)[i]->update();
            }
        for (int i=0; i < static_cast<int>(controlers.size()); i++)
            {
                controlers[i]->update();
            }

        SDL_UpdateWindowSurface(Engine::window);
    }

int Engine::play()
    {
        while(1)
            {
                update();
                SDL_Delay(0.1);
            }
    }

Engine::~Engine()
	{
       //for (int i=0; i < (int)objet.size(); i++) delete objet[i]; 
	}


