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
	sf::Clock clock;
	static sf::Int32 deltaTime;


};

