#pragma once
#include "SFML/Graphics.hpp"

class Entity
{
public:
	Entity();
	Entity(sf::Vector2f _size, std::string _texPath, sf::Vector2f _pos, float _speed);
	~Entity();

	void Update();
	void draw(sf::RenderWindow& w);

	sf::Vector2f size;
	sf::Vector2f pos;
	float speed;
	sf::Texture texture;
};

