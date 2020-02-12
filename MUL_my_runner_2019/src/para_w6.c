/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *pos_sprite_wave6(sprite_t *sp)
{
    sp->x_wave6 = 0;
    sp->pos_wave6.x = sp->x_wave6;
    sp->pos_wave6.y = -50;
    return (sp);
}

void move_wave6(sfVector2f *pos_wave6, float *x_wave6)
{
    if (*x_wave6 > -1920) {
        *pos_wave6 = (sfVector2f){*x_wave6, pos_wave6->y};
        *x_wave6 -= 1.5;
        pos_wave6->y = -50;
    }
    if (*x_wave6 <= -1920) {
        *pos_wave6 = (sfVector2f){0, pos_wave6->y};
        *x_wave6 = 0;
        pos_wave6->y = -50;
    }
}

void posi_wave6(sfClock *cl6, sfVector2f *pos_w6, sfSprite *s6, float *x_wave6)
{
    sfTime time2;
    float seconds;
    time2 = sfClock_getElapsedTime(cl6);
    seconds = time2.microseconds / 1000000.0;

    if (seconds > 0.01) {
        move_wave6(pos_w6, x_wave6);
        sfSprite_setPosition(s6, *pos_w6);
        sfClock_restart(cl6);
    }
}