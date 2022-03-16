/*
** EPITECH PROJECT, 2020
** my_print_digits.c
** File description:
** print digits 0 to 9
*/
int my_print_digits(void)
{
    char alpha;

    alpha = 48;
    while (alpha <= 57) {
        my_putchar(alpha);
        alpha = alpha + 1;
    }
    return (0);
}
