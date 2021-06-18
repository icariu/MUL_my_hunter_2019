/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** hunter
*/

#ifndef MY_HUNTER_H_
#define MY_HUNTER_H_

#include <SFML/Graphics.h>

typedef struct variable {
    sfVideoMode mode;
    sfRenderWindow* window;
    sfTexture *texture;
    sfTexture *bird;
    sfTexture *text_cursor;
    sfSprite *sprite;
    sfSprite *duck;
    sfSprite *cursor;
    sfTime time;
    sfVector2f position;
    sfVector2f pos_duck;
    sfVector2f offset;
    sfVector2f pos_ev;
    sfVector2f cond;
    sfVector2f pos_m;
    sfIntRect rect;
    sfClock *clock;
    sfText *text;
    sfFont *font;
    sfSound *sound;
    sfSoundBuffer *bam;
    sfEvent event;
    float seconds;
    int tmp;
}all;

void init_val(all *varia);
void create_all_sprites(all *varia);
void display_score(all *varia, int nb);
void display_sound(all *varia);
void set_texture(all *varia);
void display_cursor(all *varia);
void main_loop(void);
void display_bird(all *varia, int nb);
void destroy(all *varia);
int event_handle(all *varia);
void draw_bird(all *varia);
sfRenderWindow *create_a_window(all *varia);

#endif /* !MY_HUNTER_H_ */