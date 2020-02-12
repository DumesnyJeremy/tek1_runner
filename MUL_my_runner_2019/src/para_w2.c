/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *pos_sprite_wave2(sprite_t *sp)
{
    sp->x_wave2 = 0;
    sp->pos_wave2.x = sp->x_wave2;
    sp->pos_wave2.y = -50;
    return (sp);
}

void move_wave2(sfVector2f *pos_wave2, float *x_wave2)
{
    if (*x_wave2 > -1920) {
        *pos_wave2 = (sfVector2f){*x_wave2, pos_wave2->y};
        *x_wave2 -= 4;
        pos_wave2->y = -50;
    }
    if (*x_wave2 <= -1920) {
        *pos_wave2 = (sfVector2f){0, pos_wave2->y};
        *x_wave2 = 0;
        pos_wave2->y = -50;
    }
}

void posi_wave2(sfClock *cl2, sfVector2f *pos_w2, sfSprite *s2, float *x_wave2)
{
    sfTime time2;
    float seconds;
    time2 = sfClock_getElapsedTime(cl2);
    seconds = time2.microseconds / 1000000.0;

    if (seconds > 0.01) {
        move_wave2(pos_w2, x_wave2);
        sfSprite_setPosition(s2, *pos_w2);
        sfClock_restart(cl2);
    }
}