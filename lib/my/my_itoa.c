/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** itoa
*/

#include "my.h"
#include <stdlib.h>

char *my_itoa(int nb)
{
    int len = my_nblen(nb);
    char *str = malloc(sizeof(char) * (len + 1));

    for (int i = len - 1; i >= 0; i--) {
        str[i] = (nb % 10) + '0';
        nb = nb / 10;
    }
    str[len] = '\0';
    return (str);
}