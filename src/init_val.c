/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** init_val
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

void display_score(all *varia, int nb)
{
    char *str;

    str = my_itoa(nb);
    sfText_setString(varia->text, str);
}

void display_sound(all *varia)
{
    varia->bam = sfSoundBuffer_createFromFile("src/gunshot.wav");
    varia->sound = sfSound_create();
    sfSound_setBuffer(varia->sound, varia->bam);
}

void init_val(all *varia)
{
    srand(time(NULL));
    varia->clock = sfClock_create();
    varia->text = sfText_create();
    varia->position.x = -100;
    varia->position.y = rand()%750+0;
    varia->tmp = 0;
    varia->rect.top = 0;
    varia->rect.left = 0;
    varia->rect.width = 110;
    varia->rect.height = 110;
    varia->offset.x = 2;
    sfText_setFont(varia->text, varia->font);
    sfText_setCharacterSize(varia->text, 45);
    sfRenderWindow_setMouseCursorVisible(varia->window, sfFalse);
}

void create_all_sprites(all *varia)
{
    varia->texture = sfTexture_createFromFile("src/background.png", NULL);
    varia->sprite = sfSprite_create();
    varia->bird = sfTexture_createFromFile("src/sheet.png", NULL);
    varia->duck = sfSprite_create();
    varia->font = sfFont_createFromFile("src/Prisma.ttf");
    varia->text_cursor = sfTexture_createFromFile("src/crosshair.png", NULL);
    varia->cursor = sfSprite_create();
    sfSprite_setTexture(varia->sprite, varia->texture, sfTrue);
    sfSprite_setTexture(varia->duck, varia->bird, sfTrue);
}