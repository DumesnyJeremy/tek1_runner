/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *pos_sprite_wave3(sprite_t *sp)
{
    sp->x_wave3 = 0;
    sp->pos_wave3.x = sp->x_wave3;
    sp->pos_wave3.y = -50;
    return (sp);
}

void move_wave3(sfVector2f *pos_wave3, float *x_wave3)
{
    if (*x_wave3 > -1920) {
        *pos_wave3 = (sfVector2f){*x_wave3, pos_wave3->y};
        *x_wave3 -= 3;
        pos_wave3->y = -50;
    }
    if (*x_wave3 <= -1920) {
        *pos_wave3 = (sfVector2f){0, pos_wave3->y};
        *x_wave3 = 0;
        pos_wave3->y = -50;
    }
}

void posi_wave3(sfClock *cl3, sfVector2f *pos_w3, sfSprite *s3, float *x_wave3)
{
    sfTime time2;
    float seconds;
    time2 = sfClock_getElapsedTime(cl3);
    seconds = time2.microseconds / 1000000.0;

    if (seconds > 0.01) {
        move_wave3(pos_w3, x_wave3);
        sfSprite_setPosition(s3, *pos_w3);
        sfClock_restart(cl3);
    }
}