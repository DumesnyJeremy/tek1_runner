/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *pos_sprite_wave(sprite_t *sp)
{
    sp->x_wave = 0;
    sp->pos_wave.x = sp->x_wave;
    sp->pos_wave.y = -50;
    return (sp);
}

void move_wave(sfVector2f *pos_wave, float *x_wave)
{
    if (*x_wave > -1920) {
        *pos_wave = (sfVector2f){*x_wave, pos_wave->y};
        *x_wave -= 5;
        pos_wave->y = -50;
    }
    if (*x_wave <= -1920) {
        *pos_wave = (sfVector2f){0, pos_wave->y};
        *x_wave = 0;
        pos_wave->y = -50;
    }
}

void posi_wave(sfClock *cl1, sfVector2f *pos_w, sfSprite *s1, float *x_wave)
{
    sfTime time;
    float seconds;
    time = sfClock_getElapsedTime(cl1);
    seconds = time.microseconds / 1000000.0;

    if (seconds > 0.01) {
        move_wave(pos_w, x_wave);
        sfSprite_setPosition(s1, *pos_w);
        sfClock_restart(cl1);
    }
}