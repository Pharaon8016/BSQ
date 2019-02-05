/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** load_map
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

char * my_alloc_temp(void)
{
    char *temp_buff = NULL;

    temp_buff = malloc(MAP_SIZE * sizeof(char));
    if (temp_buff == NULL){
        my_putstr_error("Error: The memory could not be allocated.");
        exit(84);
    }
    return (temp_buff);
}

int my_invalid_char(void)
{
    my_putstr_error("Error : Unauthorized character in the map.");
    exit(84);
}

char *load_map(char *arr, char *filepath)
{
    char *temp_buff = my_alloc_temp();
    int fd = open(filepath, O_RDONLY);
    int first = 0;
    int k = 0;
    int i = 0;
    int j = 0;

    len = read(fd, temp_buff, MAP_SIZE);
    while (temp_buff[i++] != '\n')
        first = first + 1;
    j = first + 1;
    while (j < len)
        if (temp_buff[j] == '.' || temp_buff[j] == 'o'\
        || temp_buff[j] == '\n' || temp_buff[j] == '\0')
            arr[k++] = temp_buff[j++];
        else my_invalid_char();
    return (arr);
}