/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** main_loop
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

void draw_bird(all *varia)
{
    varia->cond = sfSprite_getPosition(varia->duck);
    varia->time = sfClock_getElapsedTime(varia->clock);
    varia->seconds = varia->time.microseconds / 1000000.0;
    sfSprite_setTextureRect(varia->duck, varia->rect);
    sfRenderWindow_drawSprite(varia->window, varia->duck, NULL);
    sfSprite_move(varia->duck, varia->offset);
}

void main_loop(void)
{
    all varia;
    int nb = 0;

    create_a_window(&varia);
    create_all_sprites(&varia);
    init_val(&varia);
    display_sound(&varia);
    while (sfRenderWindow_isOpen(varia.window)) {
        nb += event_handle(&varia);
        sfRenderWindow_drawSprite(varia.window, varia.sprite, NULL);
        display_bird(&varia, nb);
        sfRenderWindow_drawText(varia.window, varia.text, NULL);
        display_cursor(&varia);
        sfRenderWindow_display(varia.window);
        display_score(&varia, nb);
    }
    destroy(&varia);
}