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
    window.setFramerateLimit(60);

    //Shape//
    CircleShape circle(50.f);
    circle.setPosition(Vector2f(0.f, 0.f));
    circle.setFillColor(Color(255,100,200,200));

    RectangleShape rect(Vector2f(50.f,100.f));
    rect.setPosition(Vector2f(400.f, 200.f));
    rect.setFillColor(Color(200, 100, 200, 250));

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

        //Update
        circle.move(0.5f, 0.1f);
        circle.rotate(2.f);
        rect.move(-0.5f, -0.1f);
        rect.rotate(5.f);

        //Render
        window.clear(Color::Black);//Clear old frame

        //Draw game
        window.draw(circle);
        window.draw(rect);

        window.display();//Tell app that window is done drawing

        //End of application
    }
    return 0;
}*/