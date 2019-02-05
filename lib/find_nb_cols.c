/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** find nb cols
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"

int find_nb_cols(char const *filepath)
{
    char buffer[55000];
    int fd = open(filepath, O_RDONLY);
    int doc_size = read(fd, buffer, 10100);
    int i = 0;
    int first = 0;

    while (buffer[i] != '\n')
    {
        i = i + 1;
        first = first + 1;
    }
    i += 1;
    first += 1;
    while (buffer[i] != '\n' && buffer[i] != '\0')
    {
        i += 1;
    }
    close(fd);
    return (i - first);
}