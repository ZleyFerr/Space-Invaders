#pragma once
#include "global_variables.h"
#include "game.h"

void render_function(sf::RenderWindow& window)
{
    //отрисовка персонажа 
    character.set_sprite(character_sprite);
    character.Entity_draw(window);

    //отрисовка пули
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