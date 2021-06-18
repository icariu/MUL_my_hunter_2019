/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** function that concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = 0;
    int i = 0;

    dest_len = my_strlen(dest);
    for (; src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return (dest);
}
