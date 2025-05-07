#pragma once
#include "global_variables.h"

bool check_collision(const sf::Sprite& sprite1, const sf::Sprite& sprite2) //проверка коллизии двух спрайтов
{
    return sprite1.getGlobalBounds().intersects(sprite2.getGlobalBounds());
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
