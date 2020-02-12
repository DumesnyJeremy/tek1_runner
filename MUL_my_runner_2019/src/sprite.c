/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *destroy(sfRenderWindow *window, sprite_t *sp)
{
    sfRenderWindow_destroy(window);
    sfSprite_destroy(sp->sprite_wave);
    sfTexture_destroy(sp->texture_wave);
    sfSprite_destroy(sp->sprite_wave2);
    sfTexture_destroy(sp->texture_wave2);
    sfSprite_destroy(sp->sprite_wave3);
    sfTexture_destroy(sp->texture_wave3);
    sfSprite_destroy(sp->sprite_wave4);
    sfTexture_destroy(sp->texture_wave4);
    sfSprite_destroy(sp->sprite_wave5);
    sfTexture_destroy(sp->texture_wave5);
    sfSprite_destroy(sp->sprite_wave6);
    sfTexture_destroy(sp->texture_wave6);
    sfSprite_destroy(sp->sprite_wave7);
    sfTexture_destroy(sp->texture_wave7);
    sfSprite_destroy(sp->sprite_octo);
    sfTexture_destroy(sp->texture_octo);
    sfSprite_destroy(sp->sprite_miss);
    sfTexture_destroy(sp->texture_miss);
    sfSprite_destroy(sp->sprite_shark);
    sfTexture_destroy(sp->texture_shark);
    sfTexture_destroy(sp->texture_play);
    sfMusic_destroy(sp->music_shoot);
}
