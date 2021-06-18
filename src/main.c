/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** main
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

void display_bird(all *varia, int nb)
{
    if (nb - varia->tmp == 5) {
        varia->tmp = nb;
        varia->offset.x += 0.5;
    }
    draw_bird(varia);
    if (varia->seconds > 0.1) {
        varia->rect.left += 110;
        sfClock_restart(varia->clock);
    } if (varia->rect.left == 330) {
        varia->rect.left = 0;
        sfClock_restart(varia->clock);
    } if (varia->cond.x > 2050) {
        varia->position.x = -150;
        sfSprite_setPosition(varia->duck, varia->position);
    }
    varia->pos_duck.x = sfSprite_getPosition(varia->duck).x;
    varia->pos_duck.y = sfSprite_getPosition(varia->duck).y;
}

void destroy(all *varia)
{
    sfSprite_destroy(varia->sprite);
    sfTexture_destroy(varia->texture);
    sfRenderWindow_destroy(varia->window);
    sfSprite_destroy(varia->duck);
    sfTexture_destroy(varia->bird);
    sfSound_destroy(varia->sound);
    sfSoundBuffer_destroy(varia->bam);
}

sfRenderWindow *create_a_window(all *varia)
{
    varia->mode.height = 1080;
    varia->mode.width = 1920;
    varia->mode.bitsPerPixel = 32;
    varia->window = sfRenderWindow_create(varia->mode, "my_hunter",
            sfResize | sfClose, NULL);
    return (varia->window);
}

int event_handle(all *varia)
{
    varia->position.y = rand()%750+0;
    while (sfRenderWindow_pollEvent(varia->window, &varia->event)) {
        if (varia->event.type == sfEvtClosed ||
            (varia->event.type == sfEvtKeyPressed &&
            varia->event.key.code == sfKeyEscape))
                sfRenderWindow_close(varia->window);
        if (varia->event.type == sfEvtMouseButtonPressed &&
            varia->event.mouseButton.button == sfMouseLeft) {
            varia->pos_ev.x = sfMouse_getPositionRenderWindow(varia->window).x;
            varia->pos_ev.y = sfMouse_getPositionRenderWindow(varia->window).y;
            if ((varia->pos_ev.x <= (varia->pos_duck.x + 110) && varia->pos_ev.x
            >= varia->pos_duck.x) && varia->pos_ev.y <=
            (varia->pos_duck.y + 110) && varia->pos_ev.y >= varia->pos_duck.y) {
                varia->position.x = 2100;
                sfSprite_setPosition(varia->duck, varia->position);
                sfSound_play(varia->sound);
                return (1);
            }
        }
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        if (check_if_h(ac, av) == 1)
            return (0);
        else
            return (84);
    }
    if (ac > 2)
        return (84);
    main_loop();
    return (0);
}
