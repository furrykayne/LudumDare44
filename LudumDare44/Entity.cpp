#include "pch.h"
#include "Entity.h"
#include "SFML/Graphics.hpp"
#include <iostream>


Entity::Entity()
{
}

Entity::Entity(sf::Vector2f _size, std::string _texPath, sf::Vector2f _pos, float _speed)
{
	std::cout << "Entity";
	size = _size;
	pos = _pos;
	if (!texture.loadFromFile(_texPath)) {
		std::cout << "Texture not found";
	}
}


Entity::~Entity()
{
}

void Entity::Update()
{
	
}

void Entity::draw(sf::RenderWindow& w)
{
	sf::Sprite sprite(texture);
	sprite.setPosition(pos);
	w.draw(sprite);
}
