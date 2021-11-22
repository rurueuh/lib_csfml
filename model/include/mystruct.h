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
        sfSprite* dog;
        sfSprite* mouse;
        sfSprite* stage;
    } stuct_sprite;

    typedef struct stuct_sound {

    } stuct_sound;

    typedef struct stuct_rect {
        sfIntRect* intrect;
        sfFloatRect* floatrect;
    } stuct_rect;

    typedef struct stuct_vector {
        sfVector2f ruru;
    } stuct_vector;
#endif