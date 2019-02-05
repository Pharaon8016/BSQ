/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** scan_around
*/

#include "../include/my.h"

extern int SQ_ORIGINE_X;
extern int SQ_ORIGINE_Y;
extern int MAP_WIDTH;
extern int MAP_WIDTH;
extern int MAP_HEIGHT;

int scan_around(char *arr, int temp_x, int temp_y, int square_size)
{
    int ref_x = temp_x;
    int ref_y = temp_y;
    int stp = 0;
    int start = 0;

    while (stp == 0){
        if (temp_x < MAP_WIDTH && temp_y < MAP_HEIGHT){
            if (my_getchar(arr, ref_x, temp_y) == '.' \
            && my_getchar(arr, temp_x, ref_y) == '.'\
            && my_getchar(arr, ref_x, temp_y) == '.' \
            && my_getchar(arr, temp_x, ref_y) == '.'){
                temp_y--;
                temp_x--;
                start = 1;
            }else stp = 1;
            if (temp_x == SQ_ORIGINE_X && temp_y == SQ_ORIGINE_Y \
                && my_getchar(arr, temp_x, ref_y) == '.' \
                && my_getchar(arr, ref_x, temp_y) == '.'\
                && start == 1){
                square_size++;
                temp_x = SQ_ORIGINE_X + square_size;
                temp_y = SQ_ORIGINE_Y + square_size;
                ref_x = temp_x;
                ref_y = temp_y;
            }
        } else stp = 1;
    }
    return (square_size);
}