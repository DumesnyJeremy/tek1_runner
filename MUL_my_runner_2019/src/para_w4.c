/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *pos_sprite_wave4(sprite_t *sp)
{
    sp->x_wave4 = 0;
    sp->pos_wave4.x = sp->x_wave4;
    sp->pos_wave4.y = -50;
    return (sp);
}

void move_wave4(sfVector2f *pos_wave4, float *x_wave4)
{
    if (*x_wave4 > -1920) {
        *pos_wave4 = (sfVector2f){*x_wave4, pos_wave4->y};
        *x_wave4 -= 2.5;
        pos_wave4->y = -50;
    }
    if (*x_wave4 <= -1920) {
        *pos_wave4 = (sfVector2f){0, pos_wave4->y};
        *x_wave4 = 0;
        pos_wave4->y = -50;
    }
}

void posi_wave4(sfClock *cl4, sfVector2f *pos_w4, sfSprite *s4, float *x_wave4)
{
    sfTime time2;
    float seconds;
    time2 = sfClock_getElapsedTime(cl4);
    seconds = time2.microseconds / 1000000.0;

    if (seconds > 0.01) {
        move_wave4(pos_w4, x_wave4);
        sfSprite_setPosition(s4, *pos_w4);
        sfClock_restart(cl4);
    }
}