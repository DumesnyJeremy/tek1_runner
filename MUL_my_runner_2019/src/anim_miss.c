/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

sprite_t *create_miss_sprite(sprite_t *sp)
{
    sp->texture_miss = sfTexture_createFromFile("other/missile.png", NULL);
    if (!sp->texture_miss)
        return NULL;
    sp->sprite_miss = sfSprite_create();
    sfSprite_setTexture(sp->sprite_miss, sp->texture_miss, sfTrue);
    sfSprite_setTextureRect(sp->sprite_miss, sp->rect_miss);
    sfSprite_setPosition(sp->sprite_miss, sp->pos_miss);
}

sprite_t *pos_sprite_miss(sprite_t *sp)
{
    sp->x_miss = 1920;
    sp->pos_miss.x = sp->x_miss;
    sp->pos_miss.y = 600;
    sp->rect_miss.top = 0;
    sp->rect_miss.left = 0;
    sp->rect_miss.width = 160;
    sp->rect_miss.height = 41;
    return (sp);
}

void move_rect_miss(sfIntRect *rect_miss, int offset, int max_value)
{
    rect_miss->left += offset;
    if (rect_miss->left >= max_value)
        rect_miss->left = 0;
}

void anim_miss(sfClock *clock10, sfIntRect *rect_miss, sfSprite *sprite_miss)
{
    sfTime time1;
    float seconds;
    time1 = sfClock_getElapsedTime(clock10);
    seconds = time1.microseconds / 1000000.0;

    if (seconds > 0.09)
    {
        move_rect_miss(rect_miss, 160, 640);
        sfSprite_setTextureRect(sprite_miss, *rect_miss);
        sfClock_restart(clock10);
    }
}