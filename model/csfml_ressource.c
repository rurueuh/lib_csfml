/*
** EPITECH PROJECT, 2021
** ressource of game
** File description:
** generate ressource
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "include/mycsfml.h"
#include "include/mystruct.h"

stuct_rect ressource_rect(void)
{
    stuct_rect rect;
    rect.duck = ruru_create_intrect(0, 90, 26, 18);

    return rect;
}

stuct_scale ressource_scale(stuct_sprite sprite)
{
    stuct_scale scale;
    scale.duck = ruru_create_vector2f(4, 4);
    ruru_scale_sprite(sprite.duck, scale.duck.x, scale.duck.y);

    return scale;
}

stuct_sprite ressource_sprite(stuct_rect rect, sfRenderWindow* window)
{
    stuct_sprite sprite;
    sprite.duck = ruru_create_sprite_r("michel/sheet.png", 0, 0, rect.duck);
    ressource_scale(sprite);
    return sprite;
}

stuct_anim_duck ressource_anim_duck(void)
{
    stuct_anim_duck clock;
    clock.clock = sfClock_create();
    
    clock.duck_anim1 = ruru_create_intrect(28, 90 , 27, 17);
    clock.duck_anim2 = ruru_create_intrect(0, 90 , 26, 18);
    clock.duck_anim3 = ruru_create_intrect(60, 89 , 25, 21);

    return clock;
}
