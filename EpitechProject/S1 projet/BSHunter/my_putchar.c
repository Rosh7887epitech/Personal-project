/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** My_putchar
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "game.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
    return;
}
