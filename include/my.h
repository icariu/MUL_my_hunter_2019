/*
** EPITECH PROJECT, 2019
** my lib
** File description:
** all function of my lib
*/

#ifndef MY_H
#define MY_H

void my_putchar(char c);
void my_swap(int *a, int *b);
void my_sort_int_array(int *tab, int size);
int my_isneg(int n);
int my_nblen(int nb);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_is_prime(int nb);
int my_show_word_array(char * const *tab);
char *my_itoa(int nb);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);

int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);

int my_showmem(char const *str, int size);
int my_showstr(char const *str);

char **my_str_to_word_array(char const *str);

int check_if_h(int acc, char **av);

#endif /* MY_H */
