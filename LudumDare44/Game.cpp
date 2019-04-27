#include "pch.h"
#include "Game.h"
#include "Player.h"
#include "Input.h"

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
	sf::Clock clock;
	Player player(sf::Vector2f(64, 64), "res/Player.png", sf::Vector2f(100, 250), 5.0f);

	while (!gameEnded) {
		// Gameloop
		Input::handleInput(window, gameEnded);

		deltaTime = clock.restart().asMilliseconds();

		window.clear();

		player.update();
		player.draw(window);

		window.display();
	}
}


