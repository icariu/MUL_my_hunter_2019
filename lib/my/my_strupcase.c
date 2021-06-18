/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** turn to strup case
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        i++;
    }
    return (str);
}
