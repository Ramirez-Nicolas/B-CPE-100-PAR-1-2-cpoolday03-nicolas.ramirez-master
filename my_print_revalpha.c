/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** alpha reverse 
*/
int my_print_revalpha(void)
{
    char alpha;

    alpha = 122;
    while (alpha > 96) {
        my_putchar(alpha);
        alpha = alpha - 1;
    }
    return (0);
}
