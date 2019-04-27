#include "pch.h"
#include "Player.h"
#include <iostream>
#include "Game.h"


Player::Player(sf::Vector2f _size, std::string _texPath, sf::Vector2f _pos, float _speed)
{
	std::cout << "Entity";
	size = _size;
	pos = _pos;
	speed = _speed;
	if (!texture.loadFromFile(_texPath)) {
		std::cout << "Texture not found";
	}
}


Player::~Player()
{
}

void Player::update() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		pos.y += speed * Game::deltaTime;
	}
}
