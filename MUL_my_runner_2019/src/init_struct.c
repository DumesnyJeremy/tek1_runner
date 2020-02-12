/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *create_clock(sprite_t *sp)
{
    sp->clock1 = sfClock_create();
    sp->clock2 = sfClock_create();
    sp->clock3 = sfClock_create();
    sp->clock4 = sfClock_create();
    sp->clock5 = sfClock_create();
    sp->clock6 = sfClock_create();
    sp->clock6 = sfClock_create();
    sp->clock7 = sfClock_create();
    sp->clock8 = sfClock_create();
    sp->clock9 = sfClock_create();
    sp->clock10 = sfClock_create();
    sp->clock11 = sfClock_create();
    sp->clock12 = sfClock_create();
    sp->clock13 = sfClock_create();
    return sp;
}

sprite_t *init_s(sfRenderWindow *window, sprite_t *sp)
{
    pos_sprite_wave7(sp);
    create_wave7_sprite(sp);
    pos_sprite_octo(sp);
    create_octo_sprite(sp);
    pos_sprite_miss(sp);
    create_miss_sprite(sp);
    pos_sprite_shark(sp);
    create_shark_sprite(sp);
    create_clock(sp);
    createtext(sp);
    createtext2(sp);
    sound(sp);
    return (sp);
}

sprite_t *init_struct(sfRenderWindow *window, sprite_t *sp)
{
    sp->nb = 0;
    create_play_sprite(sp);
    pos_sprite_wave(sp);
    create_wave_sprite(sp);
    pos_sprite_wave2(sp);
    create_wave2_sprite(sp);
    pos_sprite_wave3(sp);
    create_wave3_sprite(sp);
    pos_sprite_wave4(sp);
    create_wave4_sprite(sp);
    pos_sprite_wave5(sp);
    create_wave5_sprite(sp);
    pos_sprite_wave6(sp);
    create_wave6_sprite(sp);
    init_s(window, sp);
    return (sp);
}