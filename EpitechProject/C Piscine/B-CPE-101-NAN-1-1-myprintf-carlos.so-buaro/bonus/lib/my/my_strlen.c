/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** compter le nombre de caractères
*/

int    my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
