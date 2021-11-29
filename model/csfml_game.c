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

int main(void)
{
    sfRenderWindow* window = ruru_create_window(1920, 1080, 144, sfTrue);
    sfEvent event;
    stuct_sprite sprite = ressource_sprite(ressource_rect(), window);
    stuct_clock clock = ressource_clock();
    if (startscreen(window, event) == 1)
        return 0;
    while (sfRenderWindow_isOpen(window)){
        while (sfRenderWindow_pollEvent(window, &event)){
            ruru_event_close(window, event);
        }
        ruru_anim_3_frames(clock, sprite.duck, 0.3);
        ruru_draw_sprite(window, 1, sprite.duck);
    }
    return 0;
}
