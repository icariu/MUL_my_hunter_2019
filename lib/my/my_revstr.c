/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** rev a string
*/

int my_strln(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *my_revstr(char *str)
{
    char c;
    char d;
    int ln = my_strln(str) - 1;
    int s = 0;

    while (ln/2 >= s)
    {
        c = str[s];
        d = str[ln - s];
        str[ln - s] = c;
        str[s] = d;
        s++;
    }
    return (str);
}
