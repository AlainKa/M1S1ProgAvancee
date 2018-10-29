#include "ship.hpp"
#include "printableobject.hpp"
#include "engine.hpp"
#include <SDL2/SDL.h>
#include <iostream>

int init()
    {
        if (SDL_Init(SDL_INIT_VIDEO) != 0 )
            {
		        std::cerr <<"Echec de l'initialisation de la SDL "<<SDL_GetError() << std::endl;
		        return 1;
            }
        Engine::window = SDL_CreateWindow("Arkanoid", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 600, SDL_WINDOW_SHOWN);

        PrintableObject::surfaceWindow = SDL_GetWindowSurface(Engine::window);
        SDL_SetColorKey(PrintableObject::spriteTemplate, true, 0);


        return 0;
    }

int main(int argc, char * argv[])
	{

        if (init()) return 1;
        Engine l;
        
        l.play();

        //Quit SDL subsystems
        SDL_Quit();
        return 0;
	}
