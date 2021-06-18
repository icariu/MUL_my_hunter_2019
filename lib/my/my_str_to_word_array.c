/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** splits a string into word
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int alphanum_char(char c)
{
    if (c == '.' || c == 'o' ||
        ('0' <= c && c <= '9'))
        return (1);
    else
        return (0);
}

int nb_words(char const *str)
{
    int nb = 0;
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] == '.' || str[i] == 'o' || (str[i] >= '0' && str[i] <= '9'))
            && (str[i + 1] == '\n' || str[i + 1] == '\0'))
            nb++;
        i++;
    }
    return (nb);
}

int nbr_letter(char const *str, int i)
{
    int k;

    for (k = 0; str[k + i] != '\0'; k++) {
        if (str[k + i] == '\n' || str[i + 1] == '\0')
            return (k);
    }
    return (k);
}

char *init_my_tab(char *tab, int nb)
{
    for (int x = 0; x < nb; x++)
        tab[x] = 0;
    return (tab);
}

char **my_str_to_word_array(char const *str)
{
    int nbr_word = nb_words(str);
    int i = 0;
    int j = 0;
    int m = 0;
    int k = 0;
    char **tab = malloc(sizeof(char *) * (nbr_word + 1));

    for (i = 0; i < nbr_word; i++) {
        while (alphanum_char(str[j]) == 0)
            j++;
        tab[i] = malloc(sizeof(char) * (nbr_letter(str, j) + 1));
        tab[i] = init_my_tab(tab[i], nbr_letter(str, j));
        for (k = 0; k < nbr_letter(str, j); k++) {
            tab[i][k] = str[j + k];
            m++;
        }
        j += m;
        m = 0;
    }
    return (tab);
}
