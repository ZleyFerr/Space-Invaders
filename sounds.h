#pragma once
#include "SFML/Audio.hpp"

sf::Music tank_shot_music;
sf::Music back_sound;
sf::Music music_death;
void music_shot()
{
	tank_shot_music.openFromFile("Audio/tank_shot.mp3");
	tank_shot_music.setVolume(25.5f);
	tank_shot_music.play();
}

void back_sound_music()
{
	back_sound.openFromFile("Audio/back_sound.mp3");
	back_sound.setLoop(true);
	back_sound.setVolume(10.f);
	back_sound.play();
}

void music_death_f()
{
	music_death.openFromFile("Audio/death_sound.mp3");
	music_death.setLoop(true);
	music_death.setVolume(10.f);
	music_death.play();
}
