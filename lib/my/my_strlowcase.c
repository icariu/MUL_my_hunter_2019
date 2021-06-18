/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** str in low case
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        i++;
    }
    return (str);
}
