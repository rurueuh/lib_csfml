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
#include "include/mystruct.h"

void main(void)
{
    stuct_sprite ruru;
    sfRenderWindow* window = ruru_create_window(1920, 1080, 144, sfTrue);
    sfEvent event;
    while (sfRenderWindow_isOpen(window)){
        while (sfRenderWindow_pollEvent(window, &event)){
            ruru_event_close(window, event);
        }
    }
}
