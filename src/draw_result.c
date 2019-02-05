/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** draw_result
*/

#include <unistd.h>
#include "../include/my.h"

extern int MAP_WIDTH;
extern int MAP_SIZE;
extern int MAP_HEIGHT;

void draw_result(char *arr, int x, int y, int size)
{
    int loopx = 0;
    int loopy = 0;
    int reset = x;
    int len = my_strlen(arr);
    if (size > MAP_WIDTH || size > MAP_HEIGHT)
        return;
    while (loopy < size){
        while (loopx < size){
            change_char(arr, x, y, 'x');
            x = x + 1;
            loopx++;
        }
        loopy++;
        loopx = 0;
        y += 1;
        x = reset;
    }
    write(1, arr, len);
}
