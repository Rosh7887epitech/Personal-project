/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** Afficher des caractères 1 par un 1
*/
#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
