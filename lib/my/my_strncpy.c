/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** my str n cpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && n > i)
    {
        dest[i] = src[i];
        i++;
    }
    if (n > src[i])
        dest[i] = '\0';
    return (dest);
}
