#pragma once
#include "global_variables.h"
#include "Entity_class.h"
#include "sounds.h"
#include "Infinity_mode.h"
#include "Render.h"
#include "Eniemes.h"

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

void character_contoller(sf::RenderWindow& window)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        character_sprite.move(-100.0f * deltaTime, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
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

void text_load() //инициалзия текста вывода очков и жизни
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

void preload()
{
    text_load();
    back_sound_music();
    character_sprite.setPosition(float(width / 2.4), float(height - 40));
}

void game_load()
{
    character_load();
    bullet_load();
    enemy_deffault_load();
    enemy_tank_load();
    enemy_spike_load();
}

void game() //основная функция игры
{
    preload(); //базовая единоразовая загрузка

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
        //если персонаж жив
        if (character.get_health() > 0)
        {
            game_load();
            deltaTime = game_clock.restart().asSeconds();
            character_contoller(window);
            window.clear();
            render_function(window);
            window.display();
            timer++;
            infinity_mode();
        }
        //если персонаж мертв
        if (character.get_health() == 0)
        {
            if (death_m == 0)
            {
                //смена музыки при смерте
                back_sound.stop();
                tank_shot_music.stop();
                music_death_f();
                death_m = 1;
            }
            window.clear();

            std::stringstream loseText_fill;
            loseText_fill << "You Lose! Your score:  " << global_score << "\nRound: " << round_count;
            scoreText.setString(loseText_fill.str());

            scoreText.setPosition(55, 200);
            scoreText.setCharacterSize(40);
            window.draw(scoreText);
            window.display();
        }
        //текст очков
        std::stringstream scoreText_Fill;
        scoreText_Fill << "Score: " << global_score << "\nRound: " << round_count;
        scoreText.setString(scoreText_Fill.str());
        //текст жизни
        std::stringstream healthText_Fill;
        healthText_Fill << "Health: " << character.get_health();
        healthText.setString(healthText_Fill.str());
    }
}
