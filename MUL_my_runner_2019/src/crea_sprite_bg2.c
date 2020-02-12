/*
** EPITECH PROJECT, 2019
** Texture all Srpite
** File description:
** Texture wave 1/2/3/4/5
*/

#include "../include/my_runner.h"

sprite_t *create_wave6_sprite(sprite_t *sp)
{
    sp->texture_wave6 = sfTexture_createFromFile("other/wave6.png", NULL);
    if (!sp->texture_wave6)
        return NULL;
    sp->sprite_wave6 = sfSprite_create();
    sfSprite_setTexture(sp->sprite_wave6, sp->texture_wave6, sfTrue);
    sfSprite_setPosition(sp->sprite_wave6, sp->pos_wave6);
}

sprite_t *create_wave7_sprite(sprite_t *sp)
{
    sp->texture_wave7 = sfTexture_createFromFile("other/wave7.png", NULL);
    if (!sp->texture_wave7)
        return NULL;
    sp->sprite_wave7 = sfSprite_create();
    sfSprite_setTexture(sp->sprite_wave7, sp->texture_wave7, sfTrue);
    sfSprite_setPosition(sp->sprite_wave7, sp->pos_wave7);
}