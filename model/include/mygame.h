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
    int event_gestion(stuct_struct *all,
    sfRenderWindow* window, sfEvent event);

    stuct_struct *ressource_struct(sfRenderWindow* window);
#endif
