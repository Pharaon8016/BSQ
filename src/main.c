/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** main
*/

#include <stddef.h>
#include <stdlib.h>
#include "../include/my.h"

int MAP_WIDTH;
int MAP_HEIGHT;
int MAP_SIZE;
int SQ_ORIGINE_X = 0;
int SQ_ORIGINE_Y = 0;

void find_biggest_square(char *arr)
{
    int big_square_x = 0;
    int big_square_y = 0;
    int big_square_size = 0;
    int square_size = 0;
    int start = 0;
    int i = 0;

    while (SQ_ORIGINE_X < MAP_WIDTH && SQ_ORIGINE_Y < MAP_HEIGHT){
        scan_start_point(arr, SQ_ORIGINE_X, SQ_ORIGINE_Y, start);
        square_size = scan_around(arr, SQ_ORIGINE_X+1, SQ_ORIGINE_Y+1, 1);

        if (square_size > big_square_size){
            big_square_x = SQ_ORIGINE_X;
            big_square_y = SQ_ORIGINE_Y;
            big_square_size = square_size;
            start = 1;
        }i++;
    }
    draw_result(arr, big_square_x, big_square_y, big_square_size);
}

int main(int argc, char **argv)
{
    char *filepath = argv[1];
    char *arr = NULL;
    int fd = fs_open_file(filepath);
    if (fd == -1){
        my_putstr_error("Error : The file could not be opened.");
        exit(84);
    }
    MAP_WIDTH = find_nb_cols(filepath);
    MAP_HEIGHT = fs_get_nbr_from_first_line(filepath);
    MAP_SIZE = (MAP_WIDTH * MAP_HEIGHT) + MAP_HEIGHT + 2;
    arr = mem_alloc_array(arr, MAP_WIDTH, MAP_HEIGHT);
    arr = load_map(arr, filepath);
    find_biggest_square(arr);
    exit(EXIT_SUCCESS);
}