#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <cstdlib>

using namespace sf;

int main()
{
    srand(time(NULL));

    RenderWindow window(VideoMode(640, 480), "Cat do(d)ge");
    window.setFramerateLimit(60);

    //Cat
    Texture catTex;
    Sprite cat;

    catTex.loadFromFile()
        
    //Doge
        
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        //UPDATE

        //DRAW
        window.clear();

        window.display();
    }
	return 0;
}