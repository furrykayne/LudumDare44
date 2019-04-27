#pragma once
#include "Entity.h"
class Player :
	public Entity
{
public:
	Player(sf::Vector2f size, std::string texPath, sf::Vector2f pos, float _speed);
	~Player();

	void update();
};

