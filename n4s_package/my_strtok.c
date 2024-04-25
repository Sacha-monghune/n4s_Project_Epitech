/*
** EPITECH PROJECT, 2024
** n4s_package
** File description:
** my_strtok
*/

#include "ai.h"

int cmp_sep(char *str, char sep)
{
    int cmpt = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] == sep)
            cmpt += 1;
    }
    return cmpt + 1;
}

char **my_strtok(char *str, char sep, int start)
{
    int cmpt = cmp_sep(str, sep);
    char **array = malloc(sizeof(char *) * (cmpt + 1));
    char *saveptr;
    char *token = strtok_r(str, &sep, &saveptr);
    int k = 0;
    int i = 0;

    while (k != start) {
        token = strtok_r(NULL, &sep, &saveptr);
        k += 1;
    }
    while (i < cmpt && token != NULL) {
        array[i] = malloc(sizeof(char) * (strlen(token) + 1));
        strcpy(array[i], token);
        token = strtok_r(NULL, &sep, &saveptr);
        i += 1;
    }
    array[i] = NULL;
    return array;
}
