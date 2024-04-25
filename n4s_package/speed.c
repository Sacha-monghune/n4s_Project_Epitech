/*
** EPITECH PROJECT, 2024
** n4s_package
** File description:
** speed
*/

#include "ai.h"

void speed(int dist_mid)
{
    if (dist_mid >= 2200)
        command("car_forward:0.7", 2);
    if (dist_mid >= 1800 && dist_mid < 2200)
        command("car_forward:0.7", 2);
    if (dist_mid >= 1400 && dist_mid < 1800)
        command("car_forward:0.6", 2);
    if (dist_mid >= 1000 && dist_mid < 1400)
        command("car_forward:0.4", 2);
    if (dist_mid >= 600 && dist_mid < 1000)
        command("car_forward:0.2", 2);
    if (dist_mid >= 0 && dist_mid < 600)
        command("car_forward:0.1", 2);
}