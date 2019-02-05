/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** backup_load_map
*/

#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

extern int MAP_SIZE;
static int len = 0;

char *load_map(char *arr, char *filepath)
{
    char *temp_buff = NULL;
    int fd = open(filepath, O_RDONLY);
    int first = 0;
    int k = 0;
    int i = 0;
    int j = 0;
    temp_buff = malloc(MAP_SIZE * sizeof(char));

    if (temp_buff == NULL){
        my_putstr_error("Error: The memory could not be allocated.");
        exit(84);
    }len = read(fd, temp_buff, MAP_SIZE + 2);
    while (temp_buff[i] != '\n'){
        i = i + 1;
        first = first + 1;
    }j = first + 1;
    while (k <= len){
        if (temp_buff[j] == '.' || temp_buff[j] == 'o' || temp_buff[j] == '\n'\
        || temp_buff[j] == '\0'){
            arr[k] = temp_buff[j];
            k++;
            j++;
        }
        else {
            my_putstr_error("Error : Unauthorized character in the map.");
            exit(84);
        }
    }
    return (arr);
}