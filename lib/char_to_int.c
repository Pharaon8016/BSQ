/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** char to int
*/

#include "../include/my.h"

int char_to_int(char *str)
{
    int index;
    int n = 1;
    int result = 0;
    int current;
    index = my_strlen(str) - 1;

    while (index >= 0){
        current = str[index] - 48;
        result = result + current * n;
        n *= 10;
        index--;
    }
    return (result);
}