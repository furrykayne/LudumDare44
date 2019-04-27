#include "pch.h"
#include "Entity.h"
#include "SFML/Graphics.hpp"


Entity::Entity()
{
}


Entity::~Entity()
{
}

void Entity::Update(sf::Clock dt)
{
}

void Entity::draw(sf::RenderWindow& w)
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	w.draw(shape);
}
