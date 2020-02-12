/*
** EPITECH PROJECT, 2019
** Texture all Srpite
** File description:
** Texture wave 1/2/3/4/5
*/

#include "../include/my_runner.h"

sprite_t *create_wave_sprite(sprite_t *sp)
{
    sp->texture_wave = sfTexture_createFromFile("other/wave.png", NULL);
    if (!sp->texture_wave)
        return NULL;
    sp->sprite_wave = sfSprite_create();
    sfSprite_setTexture(sp->sprite_wave, sp->texture_wave, sfTrue);
    sfSprite_setPosition(sp->sprite_wave, sp->pos_wave);
}

sprite_t *create_wave2_sprite(sprite_t *sp)
{
    sp->texture_wave2 = sfTexture_createFromFile("other/wave2.png", NULL);
    if (!sp->texture_wave2)
        return NULL;
    sp->sprite_wave2 = sfSprite_create();
    sfSprite_setTexture(sp->sprite_wave2, sp->texture_wave2, sfTrue);
    sfSprite_setPosition(sp->sprite_wave2, sp->pos_wave2);
}

sprite_t *create_wave3_sprite(sprite_t *sp)
{
    sp->texture_wave3 = sfTexture_createFromFile("other/wave3.png", NULL);
    if (!sp->texture_wave3)
        return NULL;
    sp->sprite_wave3 = sfSprite_create();
    sfSprite_setTexture(sp->sprite_wave3, sp->texture_wave3, sfTrue);
    sfSprite_setPosition(sp->sprite_wave3, sp->pos_wave3);
}

sprite_t *create_wave4_sprite(sprite_t *sp)
{
    sp->texture_wave4 = sfTexture_createFromFile("other/wave4.png", NULL);
    if (!sp->texture_wave4)
        return NULL;
    sp->sprite_wave4 = sfSprite_create();
    sfSprite_setTexture(sp->sprite_wave4, sp->texture_wave4, sfTrue);
    sfSprite_setPosition(sp->sprite_wave4, sp->pos_wave4);
}

sprite_t *create_wave5_sprite(sprite_t *sp)
{
    sp->texture_wave5 = sfTexture_createFromFile("other/wave5.png", NULL);
    if (!sp->texture_wave5)
        return NULL;
    sp->sprite_wave5 = sfSprite_create();
    sfSprite_setTexture(sp->sprite_wave5, sp->texture_wave5, sfTrue);
    sfSprite_setPosition(sp->sprite_wave5, sp->pos_wave5);
}