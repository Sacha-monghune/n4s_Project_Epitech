/*
** EPITECH PROJECT, 2024
** n4s_package
** File description:
** ai
*/

#ifndef AI_H_
    #define AI_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <string.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <math.h>

    #define START "start_simulation"
    #define STOP "stop_simulation"
    #define INFO_LIDAR "get_info_lidar"

char *command(char *command, int print);
char *write_info(int print);
void turn(int dist_mid, int direction);
void speed(int dist_mid);
char **my_strtok(char *str, char sep, int start);
#endif /* !AI_H_ */
