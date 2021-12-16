/*
** EPITECH PROJECT, 2021
** create window
** File description:
** start of game
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/mycsfml.h"
#include "include/my.h"
#include "include/mygame.h"
#include "include/mystruct.h"

void destroy_all(stuct_struct *all, sfRenderWindow* window)
{
    // TEXTURE
    sfTexture_destroy(all->texture->ruru);
    // SPRITE
    sfSprite_destroy(all->sprite->ruru);
    // CLOCK
    sfClock_destroy(all->anim->clock);
    free(all->texture);
    free(all->sprite);
    free(all->anim);
    free(all->rect);
    free(all->scale);
    free(all->stats);
    free(all);
    sfRenderWindow_close(window);
    sfRenderWindow_destroy(window);
}

int event_gestion(stuct_struct *all, sfRenderWindow* window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)){
        if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape) ){
            destroy_all(all, window);
            return 1;
        }
    }
}