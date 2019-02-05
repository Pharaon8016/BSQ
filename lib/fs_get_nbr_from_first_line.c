/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** fs_get_nbr_from_first_line
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

int fs_get_nbr_from_first_line(char *filepath)
{
    char buffer[10];
    int fd = open(filepath, O_RDONLY);
    int sizefd = read(fd, buffer, 10);
    int result = my_get_nbr(buffer);
    close(fd);
    if (result == 0){
        my_putstr_error("Error : Number of the first line could not be read.");
        exit(84);
    }
    return (result);
}