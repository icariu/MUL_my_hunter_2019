/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** returns the first arg raised to the power
*/

int my_compute_power_rec(int nb, int power)
{
    int result;

    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    result = nb * my_compute_power_rec(nb, power - 1);
    return (result);
}
