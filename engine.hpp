#ifndef __ENGINE_HPP
#define __ENGINE_HPP

#include <iostream>
#include <vector>
#include "ball.hpp"
#include "brick.hpp"
#include "ship.hpp"


class Engine
	{
        public:
            Engine();
            ~Engine();
        
            int play();
            void update();

            static Vec2<int> dim ;
            PrintableObject fond;
            std::vector<PrintableObject*>* levelObject;

            std::vector<ControlableObject*> controlers;
		    SDL_Event event;

            static SDL_Window * window;
	};

#endif
