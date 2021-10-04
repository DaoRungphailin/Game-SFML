/*#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

using namespace sf;

void Update(int& keytime, RectangleShape& square, RenderWindow& window);
void Draw(RenderWindow& window, RectangleShape& square);

int main()
{
	int keytime = 8;
	RenderWindow window(VideoMode(640, 480), "Simple Square Swag");
	window.setFramerateLimit(60);

	RectangleShape square(Vector2f(100.f, 100.f));
	square.setFillColor(Color::Red);
	square.setPosition(window.getSize().x / 2, window.getSize().y / 2);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
			if (event.KeyPressed && event.key.code == Keyboard::Escape)
				window.close();
		}

		Update(keytime, square, window);
		Draw(window, square);
	}
	return 0;
}
void Update(int& keytime, RectangleShape& square, RenderWindow& window)
{
	if (keytime < 8)
		keytime++;
	if (Keyboard::isKeyPressed(Keyboard::A) && square.getPosition().x > 0)
	{
		square.move(-5.f, 0.f);
		keytime = 0;
	}
	if (Keyboard::isKeyPressed(Keyboard::D) && square.getPosition().x + square.getSize().x < window.getSize().x)
	{
		square.move(5.f, 0.f);
		keytime = 0;
	}
	if (Keyboard::isKeyPressed(Keyboard::W) && square.getPosition().y > 0)
	{
		square.move(0.f, -5.f);
		keytime = 0;
	}
	if (Keyboard::isKeyPressed(Keyboard::S) && square.getPosition().y + square.getSize().y < window.getSize().y)
	{
		square.move(0.f, 5.f);
		keytime = 0;
	}
	if (Mouse::isButtonPressed(Mouse::Left))
	{
		square.move(0.f, 5.f);
		keytime = 0;
	}
	else
		square.setFillColor(Color::Red);
}
void Draw(RenderWindow& window, RectangleShape& square)
{
	window.clear(Color::Green);

	//Draw stuff
	window.draw(square);

	window.display();
}*/