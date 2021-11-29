/*
** EPITECH PROJECT, 2021
** my header
** File description:
** my
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>

#ifndef csfml_struct
    #define csfml_struct
    
    typedef struct stuct_sprite {
        sfSprite* duck;
    } stuct_sprite;

    typedef struct stuct_sound {

    } stuct_sound;

    typedef struct stuct_rect {
        sfIntRect duck;
    } stuct_rect;

    typedef struct stuct_anim_duck {
        sfTime time;
        sfIntRect duck_anim1;
        sfIntRect duck_anim2;
        sfIntRect duck_anim3;
        sfClock* clock;
    } stuct_anim_duck;

    typedef struct stuct_vector {
        sfVector2f ruru;
    } stuct_vector;

    typedef struct stuct_scale {
        sfVector2f duck;
    } stuct_scale;

#endif