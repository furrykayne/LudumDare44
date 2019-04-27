#include "pch.h"
#include "Input.h"



Input::Input()
{
}


Input::~Input()
{
}

void Input::handleInput(sf::Window& window, bool& gameEnded)
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed) {
			gameEnded = true;
			window.close();
		}

	}
}
