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

void draw_sprite(sfRenderWindow* window, stuct_sprite sprite)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite.map, NULL);
    sfRenderWindow_drawSprite(window, sprite.duck, NULL);
    sfRenderWindow_drawSprite(window, sprite.mouse, NULL);
    sfRenderWindow_display(window);
}

int main(void)
{
    sfRenderWindow* window = ruru_create_window(1920, 1080, 144, sfTrue);
    sfEvent event;
    stuct_sprite sprite = ressource_sprite(ressource_rect(), window);
    stuct_anim_duck clock = ressource_anim_duck();
    if (startscreen(window, event) == 1)
        return 0;
    while (sfRenderWindow_isOpen(window)){
        while (sfRenderWindow_pollEvent(window, &event)){
            ruru_event_close(window, event);
            ruru_mouse_move_cursor(window, sprite.mouse);
        }
        ruru_anim_3_frames(clock, sprite.duck, 0.3);
        draw_sprite(window, sprite);
    }
    return 0;
}
