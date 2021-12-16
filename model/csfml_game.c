/*
** EPITECH PROJECT, 2021
** create window
** File description:
** start of game
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdio.h>
#include "include/mycsfml.h"
#include "include/my.h"
#include "include/mygame.h"
#include "include/mystruct.h"

void draw_sprite(sfRenderWindow* window, stuct_sprite *sprite)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite->ruru, NULL);

    sfRenderWindow_display(window);
}

// trop de func dans ressources

int main(void)
{
    sfRenderWindow* window = ruru_create_window(1920, 1080, 144, sfFalse);
    sfEvent event;
    stuct_struct *all = ressource_struct(window);

    //if (startscreen(window, event) == 1)
    //    return 0;
    while (sfRenderWindow_isOpen(window)){
        if (event_gestion(all, window, event) == 1)
            return 0;
        draw_sprite(window, all->sprite);
    }

    return 0;
}
