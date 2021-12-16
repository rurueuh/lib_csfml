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
        sfSprite* ruru;
        
    } stuct_sprite;

    typedef struct stuct_texture {
        sfTexture* ruru;
        
    } stuct_texture;

    typedef struct stuct_sound {

    } stuct_sound;

    typedef struct stuct_rect {

    } stuct_rect;

    typedef struct stuct_anim {
        sfTime time;
        sfIntRect anim1;
        sfIntRect anim2;
        sfIntRect anim3;
        sfClock* clock;
    } stuct_anim;

    typedef struct stuct_stats {
    } stuct_stats;

    typedef struct stuct_scale {

    } stuct_scale;

    typedef struct stuct_struct {
        struct stuct_scale *scale;
        struct stuct_stats *stats;
        struct stuct_anim *anim;
        struct stuct_rect *rect;
        struct stuct_texture *texture;
        struct stuct_sprite *sprite;
    } stuct_struct;

#endif