/*
** EPITECH PROJECT, 2024
** n4s_package
** File description:
** ai
*/

#include "ai.h"

char *write_info(int print)
{
    char *buffer = NULL;
    size_t len = 0;

    fflush(stdout);
    if (print == 2) {
        getline(&buffer, &len, stdin);
        fprintf(stderr, "%s", buffer);
    }
    return buffer;
}

char *command(char *command, int print)
{
    printf("%s\n", command);
    return write_info(print);
}

int stop(char **array)
{
    int finish = 0;

    for (int i = 0; array[i] != NULL; i++) {
        if (strstr(array[i], "Track Cleared") != NULL)
            finish = 1;
    }
    if (finish == 1) {
        command("car_forward:0", 2);
        command("cycle_wait:50", 2);
        fprintf(stderr, "\ndistance devant la voiture: %s\n\n", array[15]);
        command(STOP, 2);
        return 1;
    }
    return 0;
}

void my_ia(void)
{
    char *buffer = NULL;
    char **array = NULL;
    float nb = 0;
    int direction = 0;

    while (1) {
        buffer = command(INFO_LIDAR, 2);
        array = my_strtok(buffer, ':', 3);
        if (stop(array) == 1) {
            fprintf(stderr, "finish\n");
            break;
        }
        nb = atof(array[15]);
        direction = atof(array[0]) - atof(array[31]);
        speed(nb);
        turn(nb, direction);
        free(buffer);
        free(array);
    }
}

int main(void)
{
    command(START, 2);
    my_ia();
    return 0;
}
