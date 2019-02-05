/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** fs_open_file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"

int fs_open_file(char const *filepath)
{
    int fd;
    fd = open(filepath, O_RDONLY);
    close(fd);
    return fd;
}