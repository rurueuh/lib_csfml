/*
** EPITECH PROJECT, 2021
** create window
** File description:
** start of game
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>

sfVector2f ruru_convert_2i_to_2f(sfVector2i convert);

sfBool ruru_mouse_touch_sprite(sfRenderWindow* window, sfSprite* sprite)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)){
        sfFloatRect rect_sprite = sfSprite_getGlobalBounds(sprite);
        sfVector2f mouse = ruru_convert_2i_to_2f(
            sfMouse_getPositionRenderWindow(window));
        if (mouse.x >= rect_sprite.left
        && mouse.x < rect_sprite.left + rect_sprite.width
        && mouse.y >= rect_sprite.top
        && mouse.y < rect_sprite.top + rect_sprite.height ){
            return sfTrue;
        } else {
            return sfFalse;
        }
    }
}

sfBool ruru_mouse_touch_text(sfRenderWindow* window, sfText* text)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)){
        sfFloatRect rect_text = sfText_getGlobalBounds(text);
        sfVector2f mouse = ruru_convert_2i_to_2f(
            sfMouse_getPositionRenderWindow(window));
        if (mouse.x >= rect_text.left
        && mouse.x < rect_text.left + rect_text.width
        && mouse.y >= rect_text.top
        && mouse.y < rect_text.top + rect_text.height ){
            return sfTrue;
        } else {
            return sfFalse;
        }
    }
}
