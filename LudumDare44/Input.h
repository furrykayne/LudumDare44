#pragma once
#include "SFML/Window.hpp"

class Input
{
public:
	Input();
	~Input();

	static void handleInput(sf::Window& window, bool& gameEnded);
};

