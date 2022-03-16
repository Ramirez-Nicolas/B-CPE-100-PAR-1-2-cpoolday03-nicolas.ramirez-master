/*
** EPITECH PROJECT, 2020
** my_print_alpha.c
** File description:
** alpha a to z
*/
int my_print_alpha(void)
{
    char alpha;
    
    alpha = 97;    
    while (alpha < 123) {
        my_putchar(alpha);
        alpha = alpha + 1;   
    }
    return (0);
}
