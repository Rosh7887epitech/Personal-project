/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "../include/my.h"

int hash(char *key)
{
    int value = 0;
    int p = 1;
    int len = my_strlen(key);

    for (int i = 0; i < len; ++i) {
        value = (value + (key[i] * p));
        p = (p * 3);
    }
    return value;
}