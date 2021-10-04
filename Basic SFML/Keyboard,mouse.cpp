/*#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

using namespace sf;
int main()
{
    RenderWindow window(VideoMode(640, 480), "First Game" , Style::Default);

    //Game Loop
    while (window.isOpen())
    {
        //Event polling
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        //if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
                //window.close();
        //if (Keyboard::isKeyPressed(Keyboard::Escape))
            //window.close();
        //if(Mouse::isButtonPressed(Mouse::Left))
            //window.close();

        //Update


        //Render
        window.clear(Color::Blue);//Clear old frame

        //Draw game


        window.display();//Tell app that window is done drawing

        //End of application
    }
    return 0;
}
*/