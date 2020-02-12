/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *pos_sprite_wave7(sprite_t *sp)
{
    sp->x_wave7 = 0;
    sp->pos_wave7.x = sp->x_wave7;
    sp->pos_wave7.y = -50;
    return (sp);
}

void move_wave7(sfVector2f *pos_wave7, float *x_wave7)
{
    if (*x_wave7 > -1920) {
        *pos_wave7 = (sfVector2f){*x_wave7, pos_wave7->y};
        *x_wave7 -= 0.8;
        pos_wave7->y = -50;
    }
    if (*x_wave7 <= -1920) {
        *pos_wave7 = (sfVector2f){0, pos_wave7->y};
        *x_wave7 = 0;
        pos_wave7->y = -50;
    }
}

void posi_wave7(sfClock *cl7, sfVector2f *pos_w7, sfSprite *s7, float *x_wave7)
{
    sfTime time2;
    float seconds;
    time2 = sfClock_getElapsedTime(cl7);
    seconds = time2.microseconds / 1000000.0;

    if (seconds > 0.01) {
        move_wave7(pos_w7, x_wave7);
        sfSprite_setPosition(s7, *pos_w7);
        sfClock_restart(cl7);
    }
}