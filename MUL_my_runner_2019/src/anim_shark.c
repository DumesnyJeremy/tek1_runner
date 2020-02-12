/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *create_shark_sprite(sprite_t *sp)
{
    sp->texture_shark = sfTexture_createFromFile("other/shark.png", NULL);
    if (!sp->texture_shark)
        return NULL;
    sp->sprite_shark = sfSprite_create();
    sfSprite_setTexture(sp->sprite_shark, sp->texture_shark, sfTrue);
    sfSprite_setTextureRect(sp->sprite_shark, sp->rect_shark);
    sfSprite_setPosition(sp->sprite_shark, sp->pos_shark);
}

sprite_t *pos_sprite_shark(sprite_t *sp)
{
    sp->x_shark = 1920;
    sp->pos_shark.x = sp->x_shark;
    sp->pos_shark.y = 550;
    sp->rect_shark.top = 0;
    sp->rect_shark.left = 0;
    sp->rect_shark.width = 212;
    sp->rect_shark.height = 114;
    return (sp);
}

void move_rect_shark(sfIntRect *rect_shark, int offset, int max_value)
{
    rect_shark->left += offset;
    if (rect_shark->left >= max_value)
        rect_shark->left = 0;
}

void anim_shark(sfClock *cl12, sfIntRect *rect_shark, sfSprite *sprite_shark)
{
    sfTime time1;
    float seconds;
    time1 = sfClock_getElapsedTime(cl12);
    seconds = time1.microseconds / 1000000.0;

    if (seconds > 0.09)
    {
        move_rect_shark(rect_shark, 212, 848);
        sfSprite_setTextureRect(sprite_shark, *rect_shark);
        sfClock_restart(cl12);
    }
}