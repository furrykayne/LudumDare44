
#include "pch.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(860, 500), "Ldudum Dare 44");

	Game game;
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();




		window.display();
	}

	return 0;
}
