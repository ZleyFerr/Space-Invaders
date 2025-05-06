#pragma once
#include <SFML/Audio.hpp>
#include "global_variables.h"
#include "Entity.h"
#include <iostream>
#include <sstream>
#include "sounds.h"

void drawFunc(sf::RenderWindow& window);
void character_contoller(sf::RenderWindow& window);
void game_load();
bool check_collision(const sf::Sprite& sprite1, const sf::Sprite& sprite2);

void check_borders(sf::Sprite& sprite) //проверка на границу карты
{
    sf::FloatRect bounds = sprite.getGlobalBounds();
    sf::Vector2f position = sprite.getPosition();

    if (position.x < 0)
    {
        position.x = 0;
    }
    if (position.x + bounds.width > width)
    {
        position.x = width - bounds.width;
    }
    if (position.y < 0)
    {
        position.y = 0;
    }
    if (position.y + bounds.height > height)
    {
        position.y = height - bounds.height;
    }
    sprite.setPosition(position);
}

void character_load() //инициализация персонажа
{
    character_texture.loadFromFile("Images/character_v2.png");
    character_sprite.setTexture(character_texture);
    character.set_sprite(character_sprite);
    character_sprite.setScale(2, 2);
}

void bullet_load() //инициализация пули
{
    bullet_texture.loadFromFile("Images/bullet_v2.png");
    bullet_sprite.setTexture(bullet_texture);
    bullet.set_sprite(bullet_sprite);
    bullet_sprite.setScale(1, 1);
}

void enemy_deffault_load() //иницинализация и функционал обычных мобов
{
    enemy_deffault_texture.loadFromFile("Images/deffault_enemy.png");
    enemy_deffault_sprite_1.setTexture(enemy_deffault_texture);
    enemy_deffault_sprite_1.setScale(1.25, 1.25);
    enemy_deffault_sprite_1.setPosition(30, 250);
    deffault_enemy_1.set_sprite(enemy_deffault_sprite_1);

    if (deffault_enemy_1.get_health() > 0)
    {
        if (check_collision(enemy_deffault_sprite_1, bullet_sprite))
        {
            bullet_active = 0;
            deffault_enemy_1.set_health(0);
            global_score += score_added_by_deffault_enemy;
        }
    }

    enemy_deffault_sprite_2.setTexture(enemy_deffault_texture);
    enemy_deffault_sprite_2.setScale(1.25, 1.25);
    enemy_deffault_sprite_2.setPosition(100, 250);
    deffault_enemy_2.set_sprite(enemy_deffault_sprite_2);

    if (deffault_enemy_2.get_health() > 0)
    {
        if (check_collision(enemy_deffault_sprite_2, bullet_sprite))
        {
            bullet_active = 0;
            deffault_enemy_2.set_health(0);
            global_score += score_added_by_deffault_enemy;
        }
    }
    enemy_deffault_sprite_3.setTexture(enemy_deffault_texture);
    enemy_deffault_sprite_3.setScale(1.25, 1.25);
    enemy_deffault_sprite_3.setPosition(170, 250);
    deffault_enemy_3.set_sprite(enemy_deffault_sprite_3);

    if (deffault_enemy_3.get_health() > 0)
    {
        if (check_collision(enemy_deffault_sprite_3, bullet_sprite))
        {
            bullet_active = 0;
            deffault_enemy_3.set_health(0);
            global_score += score_added_by_deffault_enemy;
        }
    }

    enemy_deffault_sprite_4.setTexture(enemy_deffault_texture);
    enemy_deffault_sprite_4.setScale(1.25, 1.25);
    enemy_deffault_sprite_4.setPosition(240, 250);
    deffault_enemy_4.set_sprite(enemy_deffault_sprite_4);


    if (deffault_enemy_4.get_health() > 0)
    {
        if (check_collision(enemy_deffault_sprite_4, bullet_sprite))
        {
            bullet_active = 0;
            deffault_enemy_4.set_health(0);
            global_score += score_added_by_deffault_enemy;
        }
    }

    enemy_deffault_sprite_5.setTexture(enemy_deffault_texture);
    enemy_deffault_sprite_5.setScale(1.25, 1.25);
    enemy_deffault_sprite_5.setPosition(310, 250);
    deffault_enemy_5.set_sprite(enemy_deffault_sprite_5);


    if (deffault_enemy_5.get_health() > 0)
    {
        if (check_collision(enemy_deffault_sprite_5, bullet_sprite))
        {
            bullet_active = 0;
            deffault_enemy_5.set_health(0);
            global_score += score_added_by_deffault_enemy;
        }
    }

    enemy_deffault_sprite_6.setTexture(enemy_deffault_texture);
    enemy_deffault_sprite_6.setScale(1.25, 1.25);
    enemy_deffault_sprite_6.setPosition(380, 250);
    deffault_enemy_6.set_sprite(enemy_deffault_sprite_6);


    if (deffault_enemy_6.get_health() > 0)
    {
        if (check_collision(enemy_deffault_sprite_6, bullet_sprite))
        {
            bullet_active = 0;
            deffault_enemy_6.set_health(0);
            global_score += score_added_by_deffault_enemy;
        }
    }

    enemy_deffault_sprite_7.setTexture(enemy_deffault_texture);
    enemy_deffault_sprite_7.setScale(1.25, 1.25);
    enemy_deffault_sprite_7.setPosition(450, 250);
    deffault_enemy_7.set_sprite(enemy_deffault_sprite_7);


    if (deffault_enemy_7.get_health() > 0)
    {
        if (check_collision(enemy_deffault_sprite_7, bullet_sprite))
        {
            bullet_active = 0;
            deffault_enemy_7.set_health(0);
            global_score += score_added_by_deffault_enemy;
        }
    }

    enemy_deffault_sprite_8.setTexture(enemy_deffault_texture);
    enemy_deffault_sprite_8.setScale(1.25, 1.25);
    enemy_deffault_sprite_8.setPosition(520, 250);
    deffault_enemy_8.set_sprite(enemy_deffault_sprite_8);


    if (deffault_enemy_8.get_health() > 0)
    {
        if (check_collision(enemy_deffault_sprite_8, bullet_sprite))
        {
            bullet_active = 0;
            deffault_enemy_8.set_health(0);
            global_score += score_added_by_deffault_enemy;
        }
    }
}

void enemy_tank_load() //иницинализация и функционал мобов-танокв
{
    enemy_tank_texture.loadFromFile("Images/tank_enemy.png");
    enemy_tank_sprite_1.setTexture(enemy_tank_texture);
    enemy_tank_sprite_1.setScale(1.25, 1.25);
    enemy_tank_sprite_1.setPosition(30, 165);
    tank_enemy_1.set_sprite(enemy_tank_sprite_1);

    enemy_tank_sprite_2.setTexture(enemy_tank_texture);
    enemy_tank_sprite_2.setScale(1.25, 1.25);
    enemy_tank_sprite_2.setPosition(100, 165);
    tank_enemy_2.set_sprite(enemy_tank_sprite_2);


    enemy_tank_sprite_3.setTexture(enemy_tank_texture);
    enemy_tank_sprite_3.setScale(1.25, 1.25);
    enemy_tank_sprite_3.setPosition(170, 165);
    tank_enemy_3.set_sprite(enemy_tank_sprite_3);

    enemy_tank_sprite_4.setTexture(enemy_tank_texture);
    enemy_tank_sprite_4.setScale(1.25, 1.25);
    enemy_tank_sprite_4.setPosition(240, 165);
    tank_enemy_4.set_sprite(enemy_tank_sprite_4);

    enemy_tank_sprite_5.setTexture(enemy_tank_texture);
    enemy_tank_sprite_5.setScale(1.25, 1.25);
    enemy_tank_sprite_5.setPosition(310, 165);
    tank_enemy_5.set_sprite(enemy_tank_sprite_5);

    enemy_tank_sprite_6.setTexture(enemy_tank_texture);
    enemy_tank_sprite_6.setScale(1.25, 1.25);
    enemy_tank_sprite_6.setPosition(380, 165);
    tank_enemy_6.set_sprite(enemy_tank_sprite_6);

    enemy_tank_sprite_7.setTexture(enemy_tank_texture);
    enemy_tank_sprite_7.setScale(1.25, 1.25);
    enemy_tank_sprite_7.setPosition(450, 165);
    tank_enemy_7.set_sprite(enemy_tank_sprite_7);

    enemy_tank_sprite_8.setTexture(enemy_tank_texture);
    enemy_tank_sprite_8.setScale(1.25, 1.25);
    enemy_tank_sprite_8.setPosition(520, 165);
    tank_enemy_8.set_sprite(enemy_tank_sprite_8);

    if (tank1_live)
    {
        if (check_collision(enemy_tank_sprite_1, bullet_sprite))
        {
            if (tank_enemy_1.get_health() == 3 && bullet_active == 1)
            {
                tank_enemy_1.set_health(2);
                bullet_active = 0;
                enemy_tank_sprite_1.setColor(sf::Color::Magenta);
            }

            if (tank_enemy_1.get_health() == 2 && bullet_active == 1)
            {
                tank_enemy_1.set_health(1);
                bullet_active = 0;
                enemy_tank_sprite_1.setColor(sf::Color::Red);
            }
            if (tank_enemy_1.get_health() == 1 && bullet_active == 1)
            {
                tank_enemy_1.set_health(0);
                global_score += score_added_by_tank;
                bullet_active = 0;
                tank1_live = false;
                deffault_enemy_1.set_health(1);
                enemy_deffault_sprite_1.setColor(sf::Color::Red);
            }
        }
    }

    if (tank2_live)
    {
        if (check_collision(enemy_tank_sprite_2, bullet_sprite))
        {
            if (tank_enemy_2.get_health() == 3 && bullet_active == 1)
            {
                tank_enemy_2.set_health(2);
                bullet_active = 0;
                enemy_tank_sprite_2.setColor(sf::Color::Magenta);
            }

            if (tank_enemy_2.get_health() == 2 && bullet_active == 1)
            {
                tank_enemy_2.set_health(1);
                bullet_active = 0;
                enemy_tank_sprite_2.setColor(sf::Color::Red);
            }
            if (tank_enemy_2.get_health() == 1 && bullet_active == 1)
            {
                tank_enemy_2.set_health(0);
                global_score += score_added_by_tank;
                bullet_active = 0;
                tank2_live = false;
                deffault_enemy_2.set_health(1);
                enemy_deffault_sprite_2.setColor(sf::Color::Red);
            }
        }
    }

    if (tank3_live)
    {
        if (check_collision(enemy_tank_sprite_3, bullet_sprite))
        {
            if (tank_enemy_3.get_health() == 3 && bullet_active == 1)
            {
                tank_enemy_3.set_health(2);
                bullet_active = 0;
                enemy_tank_sprite_3.setColor(sf::Color::Magenta);
            }

            if (tank_enemy_3.get_health() == 2 && bullet_active == 1)
            {
                tank_enemy_3.set_health(1);
                bullet_active = 0;
                enemy_tank_sprite_3.setColor(sf::Color::Red);
            }
            if (tank_enemy_3.get_health() == 1 && bullet_active == 1)
            {
                tank_enemy_3.set_health(0);
                global_score += score_added_by_tank;
                bullet_active = 0;
                tank3_live = false;
                deffault_enemy_3.set_health(1);
                enemy_deffault_sprite_3.setColor(sf::Color::Red);
            }
        }
    }

    if (tank4_live)
    {
        if (check_collision(enemy_tank_sprite_4, bullet_sprite))
        {
            if (tank_enemy_4.get_health() == 3 && bullet_active == 1)
            {
                tank_enemy_4.set_health(2);
                bullet_active = 0;
                enemy_tank_sprite_4.setColor(sf::Color::Magenta);
            }

            if (tank_enemy_4.get_health() == 2 && bullet_active == 1)
            {
                tank_enemy_4.set_health(1);
                bullet_active = 0;
                enemy_tank_sprite_4.setColor(sf::Color::Red);
            }
            if (tank_enemy_4.get_health() == 1 && bullet_active == 1)
            {
                tank_enemy_4.set_health(0);
                global_score += score_added_by_tank;
                bullet_active = 0;
                tank4_live = false;
                deffault_enemy_4.set_health(1);
                enemy_deffault_sprite_4.setColor(sf::Color::Red);
            }
        }
    }

    if (tank5_live)
    {
        if (check_collision(enemy_tank_sprite_5, bullet_sprite))
        {
            if (tank_enemy_5.get_health() == 3 && bullet_active == 1)
            {
                tank_enemy_5.set_health(2);
                bullet_active = 0;
                enemy_tank_sprite_5.setColor(sf::Color::Magenta);
            }

            if (tank_enemy_5.get_health() == 2 && bullet_active == 1)
            {
                tank_enemy_5.set_health(1);
                bullet_active = 0;
                enemy_tank_sprite_5.setColor(sf::Color::Red);
            }
            if (tank_enemy_5.get_health() == 1 && bullet_active == 1)
            {
                tank_enemy_5.set_health(0);
                global_score += score_added_by_tank;
                bullet_active = 0;
                tank5_live = false;
                deffault_enemy_5.set_health(1);
                enemy_deffault_sprite_5.setColor(sf::Color::Red);
            }
        }
    }

    if (tank6_live)
    {
        if (check_collision(enemy_tank_sprite_6, bullet_sprite))
        {
            if (tank_enemy_6.get_health() == 3 && bullet_active == 1)
            {
                tank_enemy_6.set_health(2);
                bullet_active = 0;
                enemy_tank_sprite_6.setColor(sf::Color::Magenta);
            }

            if (tank_enemy_6.get_health() == 2 && bullet_active == 1)
            {
                tank_enemy_6.set_health(1);
                bullet_active = 0;
                enemy_tank_sprite_6.setColor(sf::Color::Red);
            }
            if (tank_enemy_6.get_health() == 1 && bullet_active == 1)
            {
                tank_enemy_6.set_health(0);
                global_score += score_added_by_tank;
                bullet_active = 0;
                tank6_live = false;
                deffault_enemy_6.set_health(1);
                enemy_deffault_sprite_6.setColor(sf::Color::Red);
            }
        }
    }

    if (tank7_live)
    {
        if (check_collision(enemy_tank_sprite_7, bullet_sprite))
        {
            if (tank_enemy_7.get_health() == 3 && bullet_active == 1)
            {
                tank_enemy_7.set_health(2);
                bullet_active = 0;
                enemy_tank_sprite_7.setColor(sf::Color::Magenta);
            }

            if (tank_enemy_7.get_health() == 2 && bullet_active == 1)
            {
                tank_enemy_7.set_health(1);
                bullet_active = 0;
                enemy_tank_sprite_7.setColor(sf::Color::Red);
            }
            if (tank_enemy_7.get_health() == 1 && bullet_active == 1)
            {
                tank_enemy_7.set_health(0);
                global_score += score_added_by_tank;
                bullet_active = 0;
                tank7_live = false;
                deffault_enemy_7.set_health(1);
                enemy_deffault_sprite_7.setColor(sf::Color::Red);
            }
        }
    }

    if (tank8_live)
    {
        if (check_collision(enemy_tank_sprite_8, bullet_sprite))
        {
            if (tank_enemy_8.get_health() == 3 && bullet_active == 1)
            {
                tank_enemy_8.set_health(2);
                bullet_active = 0;
                enemy_tank_sprite_8.setColor(sf::Color::Magenta);
            }

            if (tank_enemy_8.get_health() == 2 && bullet_active == 1)
            {
                tank_enemy_8.set_health(1);
                bullet_active = 0;
                enemy_tank_sprite_8.setColor(sf::Color::Red);
            }
            if (tank_enemy_8.get_health() == 1 && bullet_active == 1)
            {
                tank_enemy_8.set_health(0);
                global_score += score_added_by_tank;
                bullet_active = 0;
                tank8_live = false;
                deffault_enemy_8.set_health(1);
                enemy_deffault_sprite_8.setColor(sf::Color::Red);
            }
        }
    }
}

void enemy_spike_load() //иницинализация и функционал мобов-шипов
{ 
    enemy_spike_texture.loadFromFile("Images/spike_enemy.png");
    enemy_spike_sprite_1.setTexture(enemy_spike_texture);
    enemy_spike_sprite_1.setScale(1.5, 1.5);
    enemy_spike_sprite_1.setPosition(30, 85);
    spike_enemy_1.set_sprite(enemy_spike_sprite_1);

    enemy_spike_sprite_2.setTexture(enemy_spike_texture);
    enemy_spike_sprite_2.setScale(1.5, 1.5);
    enemy_spike_sprite_2.setPosition(100, 85);
    spike_enemy_2.set_sprite(enemy_spike_sprite_2);

    enemy_spike_sprite_3.setTexture(enemy_spike_texture);
    enemy_spike_sprite_3.setScale(1.5, 1.5);
    enemy_spike_sprite_3.setPosition(170, 85);
    spike_enemy_3.set_sprite(enemy_spike_sprite_3);

    enemy_spike_sprite_4.setTexture(enemy_spike_texture);
    enemy_spike_sprite_4.setScale(1.5, 1.5);
    enemy_spike_sprite_4.setPosition(240, 85);
    spike_enemy_4.set_sprite(enemy_spike_sprite_4);

    enemy_spike_sprite_5.setTexture(enemy_spike_texture);
    enemy_spike_sprite_5.setScale(1.5, 1.5);
    enemy_spike_sprite_5.setPosition(310, 85);
    spike_enemy_5.set_sprite(enemy_spike_sprite_5);

    enemy_spike_sprite_6.setTexture(enemy_spike_texture);
    enemy_spike_sprite_6.setScale(1.5, 1.5);
    enemy_spike_sprite_6.setPosition(380, 85);
    spike_enemy_6.set_sprite(enemy_spike_sprite_6);

    enemy_spike_sprite_7.setTexture(enemy_spike_texture);
    enemy_spike_sprite_7.setScale(1.5, 1.5);
    enemy_spike_sprite_7.setPosition(450, 85);
    spike_enemy_7.set_sprite(enemy_spike_sprite_7);

    enemy_spike_sprite_8.setTexture(enemy_spike_texture);
    enemy_spike_sprite_8.setScale(1.5, 1.5);
    enemy_spike_sprite_8.setPosition(520, 85);
    spike_enemy_8.set_sprite(enemy_spike_sprite_8);

    if (spike1_live)
    {
        if (check_collision(enemy_spike_sprite_1, bullet_sprite))
        {
            if (spike_enemy_1.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_1.getColor() == sf::Color::Red)
            {
                spike_enemy_1.set_health(1);
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_1.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_1.getColor() == sf::Color::White)
            {
                spike_enemy_1.set_health(1);
                bullet_active = 0;
            }

            if (spike_enemy_1.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_1.getColor() == sf::Color::Red)
            {
                spike_enemy_1.set_health(0);
                spike1_live = false;
                global_score += score_added_by_spike;
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_1.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_1.getColor() == sf::Color::Magenta)
            {
                spike_enemy_1.set_health(0);
                bullet_active = 0;
                spike1_live = false;
                global_score += score_added_by_spike;
            }
        }
    }

    if (spike2_live)
    {
        if (check_collision(enemy_spike_sprite_2, bullet_sprite))
        {
            if (spike_enemy_2.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_2.getColor() == sf::Color::Red)
            {
                spike_enemy_2.set_health(1);
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_2.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_2.getColor() == sf::Color::White)
            {
                spike_enemy_2.set_health(1);
                bullet_active = 0;
            }

            if (spike_enemy_2.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_2.getColor() == sf::Color::Red)
            {
                spike_enemy_2.set_health(0);
                spike2_live = false;
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
                global_score += score_added_by_spike;
            }

            if (spike_enemy_2.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_2.getColor() == sf::Color::Magenta)
            {
                spike_enemy_2.set_health(0);
                bullet_active = 0;
                spike2_live = false;
                global_score += score_added_by_spike;
            }
        }
    }

    if (spike3_live)
    {
        if (check_collision(enemy_spike_sprite_3, bullet_sprite))
        {
            if (spike_enemy_3.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_3.getColor() == sf::Color::Red)
            {
                spike_enemy_3.set_health(1);
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_3.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_3.getColor() == sf::Color::White)
            {
                spike_enemy_3.set_health(1);
                bullet_active = 0;
            }

            if (spike_enemy_3.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_3.getColor() == sf::Color::Red)
            {
                spike_enemy_3.set_health(0);
                spike3_live = false;
                global_score += score_added_by_spike;
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_3.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_3.getColor() == sf::Color::Magenta)
            {
                spike_enemy_3.set_health(0);
                bullet_active = 0;
                spike3_live = false;
                global_score += score_added_by_spike;
            }
        }
    }

    if (spike4_live)
    {
        if (check_collision(enemy_spike_sprite_4, bullet_sprite))
        {
            if (spike_enemy_4.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_4.getColor() == sf::Color::Red)
            {
                spike_enemy_4.set_health(1);
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_4.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_4.getColor() == sf::Color::White)
            {
                spike_enemy_4.set_health(1);
                bullet_active = 0;
            }

            if (spike_enemy_4.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_4.getColor() == sf::Color::Red)
            {
                spike_enemy_4.set_health(0);
                spike4_live = false;
                global_score += score_added_by_spike;
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_4.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_4.getColor() == sf::Color::Magenta)
            {
                spike_enemy_4.set_health(0);
                bullet_active = 0;
                global_score += score_added_by_spike;
                spike4_live = false;
            }
        }
    }

    if (spike5_live)
    {
        if (check_collision(enemy_spike_sprite_5, bullet_sprite))
        {
            if (spike_enemy_5.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_5.getColor() == sf::Color::Red)
            {
                spike_enemy_5.set_health(1);
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_5.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_5.getColor() == sf::Color::White)
            {
                spike_enemy_5.set_health(1);
                bullet_active = 0;
            }

            if (spike_enemy_5.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_5.getColor() == sf::Color::Red)
            {
                spike_enemy_5.set_health(0);
                spike5_live = false;
                global_score += score_added_by_spike;
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_5.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_5.getColor() == sf::Color::Magenta)
            {
                spike_enemy_5.set_health(0);
                bullet_active = 0;
                global_score += score_added_by_spike;
                spike5_live = false;
            }
        }
    }

    if (spike6_live)
    {
        if (check_collision(enemy_spike_sprite_6, bullet_sprite))
        {
            if (spike_enemy_6.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_6.getColor() == sf::Color::Red)
            {
                spike_enemy_6.set_health(1);
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_6.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_6.getColor() == sf::Color::White)
            {
                spike_enemy_6.set_health(1);
                bullet_active = 0;
            }

            if (spike_enemy_6.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_6.getColor() == sf::Color::Red)
            {
                spike_enemy_6.set_health(0);
                spike6_live = false;
                global_score += score_added_by_spike;
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_6.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_6.getColor() == sf::Color::Magenta)
            {
                spike_enemy_6.set_health(0);
                bullet_active = 0;
                spike6_live = false;
                global_score += score_added_by_spike;
            }
        }
    }

    if (spike7_live)
    {
        if (check_collision(enemy_spike_sprite_7, bullet_sprite))
        {
            if (spike_enemy_7.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_7.getColor() == sf::Color::Red)
            {
                spike_enemy_7.set_health(1);
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_7.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_7.getColor() == sf::Color::White)
            {
                spike_enemy_7.set_health(1);
                bullet_active = 0;
            }

            if (spike_enemy_7.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_7.getColor() == sf::Color::Red)
            {
                spike_enemy_7.set_health(0);
                spike7_live = false;
                global_score += score_added_by_spike;
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_7.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_7.getColor() == sf::Color::Magenta)
            {
                spike_enemy_7.set_health(0);
                bullet_active = 0;
                spike7_live = false;
                global_score += score_added_by_spike;
            }
        }
    }

    if (spike8_live)
    {
        if (check_collision(enemy_spike_sprite_8, bullet_sprite))
        {
            if (spike_enemy_8.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_8.getColor() == sf::Color::Red)
            {
                spike_enemy_8.set_health(1);
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_8.get_health() == 2 && bullet_active == 1 && enemy_spike_sprite_8.getColor() == sf::Color::White)
            {
                spike_enemy_8.set_health(1);
                bullet_active = 0;
            }

            if (spike_enemy_8.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_8.getColor() == sf::Color::Red)
            {
                spike_enemy_8.set_health(0);
                spike8_live = false;
                global_score += score_added_by_spike;
                character.set_health(character.get_health() - 1);
                bullet_active = 0;
            }

            if (spike_enemy_8.get_health() == 1 && bullet_active == 1 && enemy_spike_sprite_8.getColor() == sf::Color::Magenta)
            {
                spike_enemy_8.set_health(0);
                bullet_active = 0;
                spike8_live = false;
                global_score += score_added_by_spike;
            }
        }
    }
}

void character_contoller(sf::RenderWindow& window)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        character_sprite.move(-100.0f * deltaTime, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        character_sprite.move(100.0f * deltaTime, 0);
    }
    check_borders(character_sprite);
}

void start_bullet(sf::RenderWindow& window) //выстрел
{
    if (!bullet_active && character.get_health() > 0)
    {
        bullet_active = true;
        bullet_start_position = character_sprite.getPosition();
        bullet_start_position.x += character_sprite.getGlobalBounds().width / 2 - bullet_sprite.getGlobalBounds().width / 2;
        bullet_start_position.y = character_sprite.getPosition().y;
        bullet_sprite.setPosition(bullet_start_position);
        music_shot();
    }
}

void bullet_in_flight(sf::RenderWindow& window) //полёт пули
{
    if (bullet_active)
    {
        bullet_sprite.move(0, -bullet_speed * deltaTime);
        if (bullet_sprite.getPosition().y < 0)
        {
            bullet_active = false;
        }
        bullet.set_sprite(bullet_sprite);
        bullet.Entity_draw(window);
    }
}

bool check_collision(const sf::Sprite& sprite1, const sf::Sprite& sprite2) //проверка коллизии двух спрайтов
{
    return sprite1.getGlobalBounds().intersects(sprite2.getGlobalBounds());
}

void score() //инициалзия текста вывода очков и жизни
{
    scoreText.setFont(font);
    scoreText.setCharacterSize(30);
    scoreText.setFillColor(sf::Color::White);
    scoreText.setString("test");
    scoreText.setPosition(50, 0);

    healthText.setFont(font);
    healthText.setCharacterSize(30);
    healthText.setFillColor(sf::Color::White);
    healthText.setString("test");
    healthText.setPosition(400, 0);
}

void next_level() //функция для закличенного респавна мобов
{

    if (global_score == 2528*next_level_count && character.get_health() > 0)
    {
        deffault_enemy_1.set_health(1);
        spike1_live = true; 
        tank1_live = true;
        spike_enemy_1.set_health(2);
        tank_enemy_1.set_health(3);
        enemy_tank_sprite_1.setColor(sf::Color::White);
        enemy_deffault_sprite_1.setColor(sf::Color::White);

        deffault_enemy_2.set_health(1);
        spike2_live = true;
        tank2_live = true;
        spike_enemy_2.set_health(2);
        tank_enemy_2.set_health(3);
        enemy_tank_sprite_2.setColor(sf::Color::White);
        enemy_deffault_sprite_2.setColor(sf::Color::White);

        deffault_enemy_3.set_health(1);
        spike3_live = true;
        tank3_live = true;
        spike_enemy_3.set_health(2);
        tank_enemy_3.set_health(3);
        enemy_tank_sprite_3.setColor(sf::Color::White);
        enemy_deffault_sprite_3.setColor(sf::Color::White);

        deffault_enemy_4.set_health(1);
        spike4_live = true;
        tank4_live = true;
        spike_enemy_4.set_health(2);
        tank_enemy_4.set_health(3);
        enemy_tank_sprite_4.setColor(sf::Color::White);
        enemy_deffault_sprite_4.setColor(sf::Color::White);

        deffault_enemy_5.set_health(1);
        spike5_live = true;
        tank5_live = true;
        spike_enemy_5.set_health(2);
        tank_enemy_5.set_health(3);
        enemy_tank_sprite_5.setColor(sf::Color::White);
        enemy_deffault_sprite_5.setColor(sf::Color::White);

        deffault_enemy_6.set_health(1);
        spike6_live = true;
        tank6_live = true;
        spike_enemy_6.set_health(2);
        tank_enemy_6.set_health(3);
        enemy_tank_sprite_6.setColor(sf::Color::White);
        enemy_deffault_sprite_6.setColor(sf::Color::White);

        deffault_enemy_7.set_health(1);
        spike7_live = true;
        tank7_live = true;
        spike_enemy_7.set_health(2);
        tank_enemy_7.set_health(3);
        enemy_tank_sprite_7.setColor(sf::Color::White);
        enemy_deffault_sprite_7.setColor(sf::Color::White);

        deffault_enemy_8.set_health(1);
        spike8_live = true;
        tank8_live = true;
        spike_enemy_8.set_health(2);
        tank_enemy_8.set_health(3);
        enemy_tank_sprite_8.setColor(sf::Color::White);
        enemy_deffault_sprite_8.setColor(sf::Color::White);

        next_level_count++;
    }
}

void game() //сама игра
{
    score(); //пресоздание текста
    back_sound_music();
    character_sprite.setPosition(float(width / 2.4), float(height - 40));
    sf::RenderWindow window(sf::VideoMode(width, height), "Space Invaders");
    window.setFramerateLimit(60);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
            {
                start_bullet(window);
            }
        }
        //персонаж жив
        if (character.get_health() > 0)
        {
            game_load();
            deltaTime = game_clock.restart().asSeconds();
            character_contoller(window);
            window.clear();
            drawFunc(window);
            window.display();
            timer++;
            next_level();
        }
        //персонаж мертв
        if (character.get_health() == 0)
        {
            if (death_m == 0)
            {
                back_sound.stop();
                tank_shot_music.stop();
                music_death_f();
                death_m = 1;
            }
            window.clear();
            std::stringstream ss3;
            ss3 << "You Lose! Your score:  " << global_score << "\nRound: " << next_level_count;
            scoreText.setString(ss3.str());
            scoreText.setPosition(55, 200);
            scoreText.setCharacterSize(40);
            window.draw(scoreText);
            window.display();
        }
        //текст очков
        std::stringstream ss;
        ss << "Score: " << global_score << "\nRound: " << next_level_count;
        scoreText.setString(ss.str());
        //текст жизни
        std::stringstream ss2;
        ss2 << "Health: " << character.get_health();
        healthText.setString(ss2.str());
    }
}

void game_load()
{
    character_load();
    bullet_load();
    enemy_deffault_load();
    enemy_tank_load();
    enemy_spike_load();
}

void drawFunc(sf::RenderWindow& window)
{
    //отрисовка персонажа и пули
    character.set_sprite(character_sprite);
    bullet_in_flight(window);
    character.Entity_draw(window);

    //отрисовка текста
    window.draw(scoreText);
    window.draw(healthText);

    //отрисовка дефолт мобов
    if (deffault_enemy_1.get_health() > 0) deffault_enemy_1.Entity_draw(window);
    if (deffault_enemy_2.get_health() > 0) deffault_enemy_2.Entity_draw(window);
    if (deffault_enemy_3.get_health() > 0) deffault_enemy_3.Entity_draw(window);
    if (deffault_enemy_4.get_health() > 0) deffault_enemy_4.Entity_draw(window);
    if (deffault_enemy_5.get_health() > 0) deffault_enemy_5.Entity_draw(window);
    if (deffault_enemy_6.get_health() > 0) deffault_enemy_6.Entity_draw(window);
    if (deffault_enemy_7.get_health() > 0) deffault_enemy_7.Entity_draw(window);
    if (deffault_enemy_8.get_health() > 0) deffault_enemy_8.Entity_draw(window);

    //отрирсовка танокв
    if (tank_enemy_1.get_health() > 0) tank_enemy_1.Entity_draw(window);
    if (tank_enemy_1.get_health() == 0 && tank1_live == 1) { tank1_live = 0; deffault_enemy_1.set_health(1); }
    if (tank_enemy_2.get_health() > 0) tank_enemy_2.Entity_draw(window);
    if (tank_enemy_2.get_health() == 0 && tank2_live == 1) { tank2_live = 0; deffault_enemy_2.set_health(1); }
    if (tank_enemy_3.get_health() > 0) tank_enemy_3.Entity_draw(window);
    if (tank_enemy_3.get_health() == 0 && tank3_live == 1) { tank3_live = 0; deffault_enemy_3.set_health(1); }
    if (tank_enemy_4.get_health() > 0) tank_enemy_4.Entity_draw(window);
    if (tank_enemy_4.get_health() == 0 && tank4_live == 1) { tank4_live = 0; deffault_enemy_4.set_health(1); }
    if (tank_enemy_5.get_health() > 0) tank_enemy_5.Entity_draw(window);
    if (tank_enemy_5.get_health() == 0 && tank5_live == 1) { tank5_live = 0; deffault_enemy_5.set_health(1); }
    if (tank_enemy_6.get_health() > 0) tank_enemy_6.Entity_draw(window);
    if (tank_enemy_6.get_health() == 0 && tank6_live == 1) { tank6_live = 0; deffault_enemy_6.set_health(1); }
    if (tank_enemy_7.get_health() > 0) tank_enemy_7.Entity_draw(window);
    if (tank_enemy_7.get_health() == 0 && tank7_live == 1) { tank7_live = 0; deffault_enemy_7.set_health(1); }
    if (tank_enemy_8.get_health() > 0) tank_enemy_8.Entity_draw(window);
    if (tank_enemy_8.get_health() == 0 && tank8_live == 1) { tank8_live = 0; deffault_enemy_8.set_health(1); }

    //таймер для становления шипов опасными
    if (timer == 120)
    {
        enemy_spike_sprite_1.setColor(sf::Color::Red);
        enemy_spike_sprite_2.setColor(sf::Color::Red);
        enemy_spike_sprite_3.setColor(sf::Color::Red);
        enemy_spike_sprite_4.setColor(sf::Color::Red);
        enemy_spike_sprite_5.setColor(sf::Color::Red);
        enemy_spike_sprite_6.setColor(sf::Color::Red);
        enemy_spike_sprite_7.setColor(sf::Color::Red);
        enemy_spike_sprite_8.setColor(sf::Color::Red);
    }
    //обнуление таймера
    if (timer == 150)
    {
        timer = 0;
    }

    //покраска шипов в белый
    if (timer == 0 || timer == 15 || timer == 30 || timer == 45 || timer == 60 || timer == 75 || timer == 90 || timer == 115)
    {
        if (spike_enemy_1.get_health() == 2)
            enemy_spike_sprite_1.setColor(sf::Color::White);
        else if (spike_enemy_1.get_health() == 1)
            enemy_spike_sprite_1.setColor(sf::Color::Magenta);

        if (spike_enemy_2.get_health() == 2)
            enemy_spike_sprite_2.setColor(sf::Color::White);
        else if (spike_enemy_2.get_health() == 1)
            enemy_spike_sprite_2.setColor(sf::Color::Magenta);

        if (spike_enemy_3.get_health() == 2)
            enemy_spike_sprite_3.setColor(sf::Color::White);
        else if (spike_enemy_3.get_health() == 1)
            enemy_spike_sprite_3.setColor(sf::Color::Magenta);

        if (spike_enemy_4.get_health() == 2)
            enemy_spike_sprite_4.setColor(sf::Color::White);
        else if (spike_enemy_4.get_health() == 1)
            enemy_spike_sprite_4.setColor(sf::Color::Magenta);

        if (spike_enemy_5.get_health() == 2)
            enemy_spike_sprite_5.setColor(sf::Color::White);
        else if (spike_enemy_5.get_health() == 1)
            enemy_spike_sprite_5.setColor(sf::Color::Magenta);

        if (spike_enemy_6.get_health() == 2)
            enemy_spike_sprite_6.setColor(sf::Color::White);
        else if (spike_enemy_6.get_health() == 1)
            enemy_spike_sprite_6.setColor(sf::Color::Magenta);

        if (spike_enemy_7.get_health() == 2)
            enemy_spike_sprite_7.setColor(sf::Color::White);
        else if (spike_enemy_7.get_health() == 1)
            enemy_spike_sprite_7.setColor(sf::Color::Magenta);

        if (spike_enemy_8.get_health() == 2)
            enemy_spike_sprite_8.setColor(sf::Color::White);
        else if (spike_enemy_8.get_health() == 1)
            enemy_spike_sprite_8.setColor(sf::Color::Magenta);
    }

    //отрисовка шипов
    if (spike_enemy_1.get_health() > 0) spike_enemy_1.Entity_draw(window);
    if (spike_enemy_2.get_health() > 0) spike_enemy_2.Entity_draw(window);
    if (spike_enemy_3.get_health() > 0) spike_enemy_3.Entity_draw(window);
    if (spike_enemy_4.get_health() > 0) spike_enemy_4.Entity_draw(window);
    if (spike_enemy_5.get_health() > 0) spike_enemy_5.Entity_draw(window);
    if (spike_enemy_6.get_health() > 0) spike_enemy_6.Entity_draw(window);
    if (spike_enemy_7.get_health() > 0) spike_enemy_7.Entity_draw(window);
    if (spike_enemy_8.get_health() > 0) spike_enemy_8.Entity_draw(window);

}
