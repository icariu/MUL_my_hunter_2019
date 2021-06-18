/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** returns the square root
*/

int my_compute_square_root(int nb)
{
    int x = 1;
    int result = 1;

    if (nb == 0)
        return (nb);
    if (nb < 0)
        return (0);
    if (nb == 1)
        return (nb);
    while (x <= 46340 && (x * x) < nb) {
        x++;
        if (x * x == nb)
            return (x);
    }
    return (0);
}
