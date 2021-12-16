/*
** EPITECH PROJECT, 2021
** create cursor
** File description:
** remove window cursor, need window, path
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>

sfText* ruru_create_text(int pos_x, int pos_y, char *str, sfFont* font)
{
    sfText* text = sfText_create();
    sfVector2f end_vector = {pos_x, pos_y};
    sfText_setFont(text, font);
    sfText_setColor(text, sfWhite);
    sfText_setCharacterSize(text, 30);
    sfText_setString(text, str);
    sfText_setPosition(text, end_vector);
    return text;
}
