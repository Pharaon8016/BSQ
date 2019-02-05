/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** getchar
*/

extern int MAP_WIDTH;

char my_getchar(char *arr, int x, int y)
{
    char c = arr[(y * (MAP_WIDTH + 1) + x)];
    return (c);
}

void change_char(char *arr, int x, int y, char c)
{
    if (my_getchar(arr, x, y) == '.')
    arr[(y * (MAP_WIDTH + 1) + x)] = c;
}