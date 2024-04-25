/*
** EPITECH PROJECT, 2024
** n4s_package
** File description:
** turn
*/

#include "ai.h"

void turning(int val, char *deg)
{
    if (val < 0) {
        printf("wheels_dir:-%s\n", deg);
        write_info(2);
    }
    if (val >= 0) {
        printf("wheels_dir:%s\n", deg);
        write_info(2);
    }
}

void turn(int dist_mid, int direction)
{
    if (dist_mid >= 1500)
        turning(direction, "0.008");
    if (dist_mid >= 1100 && dist_mid < 1500)
        turning(direction, "0.005");
    if (dist_mid >= 700 && dist_mid < 1100)
        turning(direction, "0.1");
    if (dist_mid >= 500 && dist_mid < 700)
        turning(direction, "0.25");
    if (dist_mid >= 300 && dist_mid < 500)
        turning(direction, "0.3");
    if (dist_mid >= 0 && dist_mid < 300)
        turning(direction, "0.5");
}
