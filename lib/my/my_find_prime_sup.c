/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** returns smallest prime nbr greater or equal to the nbr
*/

int my_amazon_prime(int nb)
{
    int x = 2;

    if (nb == 1)
        return (0);
    while (x != nb) {
        if (nb%x == 0)
            return (0);
        x++;
    }
    if (x == nb)
        return (1);
}

int my_find_prime_sup(int nb)
{
    int i = nb;

    if (nb <= 0)
        return (2);
    while (my_amazon_prime(i) != 1)
    {
        i++;
    }
    return (i);
}
