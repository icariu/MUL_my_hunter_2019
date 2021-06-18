/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** display_cursor
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
#include "my.h"
#include "my_hunter.h"

void display_cursor(all *varia)
{
    sfSprite_setTexture(varia->cursor, varia->text_cursor, sfTrue);
    varia->pos_m.x = sfMouse_getPositionRenderWindow(varia->window).x - 37.5;
    varia->pos_m.y = sfMouse_getPositionRenderWindow(varia->window).y - 37.5;
    sfSprite_setPosition(varia->cursor, varia->pos_m);
    sfRenderWindow_drawSprite(varia->window, varia->cursor, NULL);
}