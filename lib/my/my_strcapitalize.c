/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** str in capitalize
*/

char *my_strlowercase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        i++;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    str = my_strlowercase(str);
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - ('a' - 'A');
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' &&
        (!(str[i - 1] >= '9' && str[i - 1] <= '0') &&
        !(str[i - 1] >= 'A' && str[i - 1] <= 'Z') &&
        !(str[i - 1] >= 'a' && str[i - 1] <= 'z')))
            str[i] = str[i] - ('a' - 'A');
        i++;
    }
    return (str);
}
