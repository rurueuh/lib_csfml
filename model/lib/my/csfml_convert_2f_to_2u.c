/*
** EPITECH PROJECT, 2021
** create window
** File description:
** start of game
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>

sfVector2u ruru_convert_2f_to_2u(sfVector2f convert)
{
    sfVector2u vector = {(unsigned int) convert.x, (unsigned int) convert.y};
    return vector;
}
