/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** scan_start_point
*/

#include "../include/my.h"

extern int MAP_WIDTH;
extern int MAP_HEIGHT;
extern int MAP_SIZE;
extern int SQ_ORIGINE_X;
extern int SQ_ORIGINE_Y;

void scan_start_point(char *arr, int x, int y, int start)
{
    int start_x = SQ_ORIGINE_X + start;
    int start_y = SQ_ORIGINE_Y;

    if (start_y > MAP_HEIGHT){
        start_y = SQ_ORIGINE_X;
    }
    if (start_x > MAP_WIDTH - 1){
        start_x = 0;
        start_y += 1;
    }
    while (my_getchar(arr, start_x, start_y) == 'o'){
        start_x += 1;

        if (start_x > MAP_WIDTH - 2){
            start_x = 0;
            start_y += 1;
        }
    }
    SQ_ORIGINE_X = start_x;
    SQ_ORIGINE_Y = start_y;
}