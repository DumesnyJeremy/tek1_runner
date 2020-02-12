/*
** EPITECH PROJECT, 2019
** Texture all Srpite
** File description:
** Texture wave 1/2/3/4/5
*/

#include "../include/my_runner.h"

sprite_t *create_octo_sprite(sprite_t *sp)
{
    sp->texture_octo = sfTexture_createFromFile("other/swin.png", NULL);
    if (!sp->texture_octo)
        return NULL;
    sp->sprite_octo = sfSprite_create();
    sfSprite_setTexture(sp->sprite_octo, sp->texture_octo, sfTrue);
    sfSprite_setTextureRect(sp->sprite_octo, sp->rect_octo);
    sfSprite_setPosition(sp->sprite_octo, sp->pos_octo);
}

void move_rect_octo(sfIntRect *rect_octo, int offset, int max_value)
{
    rect_octo->left += offset;
    if (rect_octo->left >= max_value)
        rect_octo->left = 0;
}

sprite_t *pos_sprite_octo(sprite_t *sp)
{
    sp->y_octo = 520;
    sp->pos_octo.x = 200;
    sp->pos_octo.y = sp->y_octo;
    sp->rect_octo.top = 0;
    sp->rect_octo.left = 0;
    sp->rect_octo.width = 333;
    sp->rect_octo.height = 217;
    return (sp);
}

void move_octo(sprite_t *sp, float *y_octo)
{
    if (*y_octo < 520) {
        sp->pos_octo = (sfVector2f){sp->pos_octo.x, *y_octo};
        *y_octo += 3;
    }
    if (*y_octo >= 1200) {
        sp->pos_octo = (sfVector2f){sp->pos_octo.x, 500};
        *y_octo = 500;
        sp->pos_octo.y = -200;
    }
}

void anim_octo(sfClock *clock8, sfIntRect *rect_octo, sfSprite *sprite_octo)
{
    sfTime time1;
    float seconds;
    time1 = sfClock_getElapsedTime(clock8);
    seconds = time1.microseconds / 1000000.0;

    if (seconds > 0.09)
    {
        move_rect_octo(rect_octo, 333, 999);
        sfSprite_setTextureRect(sprite_octo, *rect_octo);
        sfClock_restart(clock8);
    }
}

void posi_octo(sfClock *cl9, sfSprite *s9, float *y_octo, sprite_t *sp)
{
    sfTime time2;
    float seconds;
    time2 = sfClock_getElapsedTime(cl9);
    seconds = time2.microseconds / 1000000.0;

    if (seconds > 0.0001) {
        move_octo(sp, y_octo);
        sfSprite_setPosition(s9, sp->pos_octo);
        sfClock_restart(cl9);
    }
}