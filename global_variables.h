#pragma once
#include <SFML/Graphics.hpp>
#include "Entity_class.h"
#include <iostream>
#include <sstream>

sf::Clock game_clock;
float deltaTime;

//размеры окна
int width = 600;
int height = 400;

int timer = 0; //игровой таймер

//отвечают за смерть
bool death_m = 0;
int global_score = 0;
int round_count = 1;

//очки за мобов
int score_added_by_spike = 150;
int score_added_by_tank = 100;
int score_added_by_deffault_enemy = 33;

//текст
sf::Font font;
sf::Text scoreText;
sf::Text healthText;

//пуля
Entity bullet;
sf::Sprite bullet_sprite;
sf::Texture bullet_texture;
bool bullet_active = false;
float bullet_speed = 200.0f;
sf::Vector2f bullet_start_position;

//персонаж
Entity character(3);
sf::Sprite character_sprite;
sf::Texture character_texture;

//текстуры врагов
sf::Texture enemy_tank_texture;
sf::Texture enemy_spike_texture;
sf::Texture enemy_deffault_texture;

//спрайты дефолт врагов
sf::Sprite enemy_deffault_sprite_1;
sf::Sprite enemy_deffault_sprite_2;
sf::Sprite enemy_deffault_sprite_3;
sf::Sprite enemy_deffault_sprite_4;
sf::Sprite enemy_deffault_sprite_5;
sf::Sprite enemy_deffault_sprite_6;
sf::Sprite enemy_deffault_sprite_7;
sf::Sprite enemy_deffault_sprite_8;

//спрайты танк врагов
sf::Sprite enemy_tank_sprite_1;
sf::Sprite enemy_tank_sprite_2;
sf::Sprite enemy_tank_sprite_3;
sf::Sprite enemy_tank_sprite_4;
sf::Sprite enemy_tank_sprite_5;
sf::Sprite enemy_tank_sprite_6;
sf::Sprite enemy_tank_sprite_7;
sf::Sprite enemy_tank_sprite_8;

//спрайты шипов врагов
sf::Sprite enemy_spike_sprite_1;
sf::Sprite enemy_spike_sprite_2;
sf::Sprite enemy_spike_sprite_3;
sf::Sprite enemy_spike_sprite_4;
sf::Sprite enemy_spike_sprite_5;
sf::Sprite enemy_spike_sprite_6;
sf::Sprite enemy_spike_sprite_7;
sf::Sprite enemy_spike_sprite_8;

//создание дефолт мобов
Entity deffault_enemy_1(1);
Entity deffault_enemy_2(1);
Entity deffault_enemy_3(1);
Entity deffault_enemy_4(1);
Entity deffault_enemy_5(1);
Entity deffault_enemy_6(1);
Entity deffault_enemy_7(1);
Entity deffault_enemy_8(1);

//создание врагов танков
Entity tank_enemy_1(3);
Entity tank_enemy_2(3);
Entity tank_enemy_3(3);
Entity tank_enemy_4(3);
Entity tank_enemy_5(3);
Entity tank_enemy_6(3);
Entity tank_enemy_7(3);
Entity tank_enemy_8(3);

//проврека на то жив ли танк
bool tank1_live = 1;
bool tank2_live = 1;
bool tank3_live = 1;
bool tank4_live = 1;
bool tank5_live = 1;
bool tank6_live = 1;
bool tank7_live = 1;
bool tank8_live = 1;

//создание врагов шипов
Entity spike_enemy_1(2);
Entity spike_enemy_2(2);
Entity spike_enemy_3(2);
Entity spike_enemy_4(2);
Entity spike_enemy_5(2);
Entity spike_enemy_6(2);
Entity spike_enemy_7(2);
Entity spike_enemy_8(2);

//проверка на то жив ли шип
bool spike1_live = 1;
bool spike2_live = 1;
bool spike3_live = 1;
bool spike4_live = 1;
bool spike5_live = 1;
bool spike6_live = 1;
bool spike7_live = 1;
bool spike8_live = 1;
