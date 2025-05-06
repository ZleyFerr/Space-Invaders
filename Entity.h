#pragma once
#include <SFML/Graphics.hpp>
#include "global_variables.h"

class Entity
{
private:
	int health = 3;
	int damage;
	sf::Sprite texture;
	sf::Sprite sprite;
public:
	Entity(int health, int damage, sf::Sprite sprite) :  health(health), damage(damage), sprite(sprite) {};
	Entity() {};
	Entity(int health) : health(health){ };
	void Entity_draw(sf::RenderWindow& window) { window.draw(sprite); };
	void set_sprite(sf::Sprite spr) { sprite = spr; };
	void set_health(int health) { this->health = health; };
	int get_health() const { return health; };
	sf::Sprite get_sprite() { return sprite; };
};


