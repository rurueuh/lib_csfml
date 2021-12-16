/*
** EPITECH PROJECT, 2021
** ressource of game
** File description:
** generate ressource
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include "include/mycsfml.h"
#include "include/mystruct.h"

stuct_rect *ressource_rect(void)
{
    stuct_rect *rect = malloc(sizeof(stuct_rect));

    return rect;
}

stuct_scale *ressource_scale(stuct_sprite *sprite, sfRenderWindow* window)
{
    stuct_scale *scale = malloc(sizeof(stuct_scale));

    return scale;
}

stuct_texture *ressource_texture(void)
{
    stuct_texture *texture = malloc(sizeof(stuct_texture));
    texture->ruru = sfTexture_createFromFile("michel/stage_background.png", NULL);
    return texture;
}

stuct_sprite *ressource_sprite(stuct_rect *rect, stuct_texture *texture,
sfRenderWindow* window)
{
    stuct_sprite *sprite = malloc(sizeof(stuct_sprite));
    sprite->ruru = ruru_create_sprite_texture(texture->ruru, 0, 0);
    return sprite;
}

stuct_anim *ressource_anim(void)
{
    stuct_anim *clock = malloc(sizeof(stuct_anim));
    clock->clock = sfClock_create();
    
    clock->anim1 = ruru_create_intrect(28, 90 , 27, 17);
    clock->anim2 = ruru_create_intrect(0, 90 , 26, 18);
    clock->anim3 = ruru_create_intrect(60, 89 , 25, 21);

    return clock;
}

stuct_stats *ressource_stats(void)
{
    stuct_stats *stats = malloc(sizeof(stuct_stats));
    return stats;
}

stuct_struct *ressource_struct(sfRenderWindow* window)
{
    stuct_struct *stuct = malloc(sizeof(stuct_struct));
    stuct->rect = ressource_rect();
    stuct->texture = ressource_texture();
    stuct->sprite = ressource_sprite(stuct->rect, stuct->texture, window);
    stuct->scale = ressource_scale(stuct->sprite, window);
    stuct->anim = ressource_anim();
    stuct->stats = ressource_stats();
    return stuct;
}
