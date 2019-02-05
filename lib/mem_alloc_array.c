/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** mem_alloc_array
*/

#include <stdlib.h>
#include "../include/my.h"

char *mem_alloc_array(char *arr, int x, int y)
{
    arr = malloc((((x * y) + y) + 1) * sizeof(char));

    if (arr == NULL){
        my_putstr_error("Error: Allocation Failure.");
        return NULL;
    }
    return (arr);
}