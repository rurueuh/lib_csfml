/*
** EPITECH PROJECT, 2021
** create window
** File description:
** start of game
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdio.h>
#include "../../include/mystruct.h"

void ruru_anim_3_frames(stuct_clock clock, sfSprite* sprite)
{
    clock.time = sfClock_getElapsedTime(clock.clock);
    float sec = clock.time.microseconds / 1000000.0;
    sfIntRect rect;
    if (sec >= 0.0){
        rect = clock.duck_anim1;
    }
    if (sec >= 0.5){
        rect = clock.duck_anim2;
    }
    if (sec >= 1){
        rect = clock.duck_anim3;
    }
    if (sec >= 1.5){
        sfClock_restart(clock.clock);
    }
    sfSprite_setTextureRect(sprite, rect);
    return;
}
