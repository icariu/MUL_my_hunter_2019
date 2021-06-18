/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** concatenates n characters of the src string to the end of the dest string
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0 ; i < nb && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return (dest);
}
