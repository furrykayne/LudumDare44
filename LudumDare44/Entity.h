#pragma once
#include "SFML/Graphics.hpp"

class Entity
{
public:
	Entity();
	~Entity();

	void Update(sf::Clock dt);
	void draw(sf::RenderWindow& w);
};

