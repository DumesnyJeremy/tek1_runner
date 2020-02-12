/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *pos_sprite_wave5(sprite_t *sp)
{
    sp->x_wave5 = 0;
    sp->pos_wave5.x = sp->x_wave5;
    sp->pos_wave5.y = -50;
    return (sp);
}

void move_wave5(sfVector2f *pos_wave5, float *x_wave5)
{
    if (*x_wave5 > -1920) {
        *pos_wave5 = (sfVector2f){*x_wave5, pos_wave5->y};
        *x_wave5 -= 2.0;
        pos_wave5->y = -50;
    }
    if (*x_wave5 <= -1920) {
        *pos_wave5 = (sfVector2f){0, pos_wave5->y};
        *x_wave5 = 0;
        pos_wave5->y = -50;
    }
}

void posi_wave5(sfClock *cl5, sfVector2f *pos_w5, sfSprite *s5, float *x_wave5)
{
    sfTime time2;
    float seconds;
    time2 = sfClock_getElapsedTime(cl5);
    seconds = time2.microseconds / 1000000.0;

    if (seconds > 0.01) {
        move_wave5(pos_w5, x_wave5);
        sfSprite_setPosition(s5, *pos_w5);
        sfClock_restart(cl5);
    }
}