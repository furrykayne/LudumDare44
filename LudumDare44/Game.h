#pragma once

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

class Game
{
public:
	Game();
	~Game();
	
	void run();
	
	bool gameEnded;
	static sf::Clock deltaTime;


};

