#include "pch.h"
#include "Game.h"
#include "Player.h"

#include <SFML/Graphics.hpp>
#include <iostream>



Game::Game()
{
	gameEnded = false;
}

Game::~Game()
{
}

void Game::run()
{
	sf::RenderWindow window(sf::VideoMode(860, 500), "Ldudum Dare 44");

	Player player;

	while (!gameEnded) {
		// Gameloop
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				gameEnded = true;
				window.close();
			}
				
		}

		window.clear();

		player.draw(window);

		window.display();
	}
}


