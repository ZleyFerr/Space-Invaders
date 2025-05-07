#pragma once
#include "global_variables.h"

void infinity_mode() //функция для зацикленного респавна врагов
{

    if (global_score == 2528 * round_count && character.get_health() > 0)
    {
        //каждый блок отвечает за свой столбец мобов
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

        round_count++;
    }
}