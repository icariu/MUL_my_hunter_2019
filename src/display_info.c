/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** display_info
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

void display_info(void)
{
    my_putstr("\tWelcome to a remake of the cult game Duck Hunt !\n\n");
    my_putstr("The rules are super simple : all you have to do");
    my_putstr(" is to shoot at the birds.\n");
    my_putstr("To do so :\n\t- click on the left mouse button to shoot\n");
    my_putstr("\t- if you want to leave the game, just press 'echap'\n");
    my_putstr("\t- your score is displayed at the top left of the window\n");
}

int check_if_h(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        display_info();
        return (1);
    }
    return (0);
}