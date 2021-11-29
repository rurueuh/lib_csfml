/*
** EPITECH PROJECT, 2021
** lib for the game
** File description:
** all func of game
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "./mystruct.h"

#ifndef MYGAME_H_
    #define MYGAME_H_
    int startscreen(sfRenderWindow* window, sfEvent event);

    stuct_rect ressource_rect(void);
    stuct_anim_duck ressource_anim_duck(void);
    stuct_sprite ressource_sprite(stuct_rect rect, sfRenderWindow* window);

#endif
