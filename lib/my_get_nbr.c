/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** my_get_nbr
*/

#include <unistd.h>
#include "../include/my.h"

static int index = 0;
static int index_tableau = 0;
static int positif = 1;
static int longueur;
static int arret = 0;
static char trouve_nb = 0;
static int valeur;
static char tableau[10] = "";

int is_pos(char c)
{
    if (c == '-'){
        return (-1);
    }
    return (1);
}

int my_get_nbr(char const *str)
{
    longueur = my_strlen(str) - 1;
    while ((index <= longueur) && (arret != 1)){
        positif = is_pos(str[index]);

        if (str[index] >= '0' && str[index] <= '9'){
            tableau[index_tableau] = str[index];
            trouve_nb = 1;
            index_tableau++;
        }else{
            if (trouve_nb == 1)
                arret = 1;
            else
                trouve_nb = 0;
        }
        if (index_tableau > 10)
            return (0);
        index++;
    }
    valeur = char_to_int(tableau) * positif;
    return (valeur);
}