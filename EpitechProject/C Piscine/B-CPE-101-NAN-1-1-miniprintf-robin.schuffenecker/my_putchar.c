/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** my_putchar
*/

#include <unistd.h>
#include "include/mprintf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}