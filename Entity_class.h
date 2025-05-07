#pragma once
#include <SFML/Graphics.hpp>
#include "global_variables.h"

sf::Sprite empty_sprite;

class Entity
{
private:
	int health = 3;
	sf::Sprite sprite = empty_sprite;
public:
	Entity() {};
	Entity(int health) : health(health) {};

	void Entity_draw(sf::RenderWindow& window) { window.draw(sprite); };
	void set_sprite(sf::Sprite spr) { sprite = spr; };
	void set_health(int health) { this->health = health; };
	int get_health() const { return health; };
	sf::Sprite get_sprite() { return sprite; };
};


