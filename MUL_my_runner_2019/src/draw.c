/*
** EPITECH PROJECT, 2019
** oui
** File description:
** move pixel
*/

#include "../include/my_runner.h"

void draw_rd_map(sfRenderWindow *window, sprite_t *sp, int i, char *buffer)
{
    if (buffer[i] == '1')
    {
        sp->pos_miss.x -= 15;
        if (sp->pos_miss.x <= -100) {
            sp->pos_miss.x = 1920;
            sp->pos_miss.x -= 0;
        }
        sfRenderWindow_drawSprite(window, sp->sprite_miss, NULL);
        sfSprite_setPosition(sp->sprite_miss, sp->pos_miss);
        anim_miss(sp->clock10, &sp->rect_miss, sp->sprite_miss);
    }
    else if (buffer[i] == '2')
    {
        sp->pos_shark.x -= 15;
        if (sp->pos_shark.x <= -100) {
            sp->pos_shark.x = 1920;
            sp->pos_shark.x -= 0;
        }
        sfRenderWindow_drawSprite(window, sp->sprite_shark, NULL);
        sfSprite_setPosition(sp->sprite_shark, sp->pos_shark);
        anim_shark(sp->clock12, &sp->rect_shark, sp->sprite_shark);
    }
}

void draw(sfRenderWindow *window, sprite_t *sp)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sp->sprite_wave7, NULL);
    sfRenderWindow_drawSprite(window, sp->sprite_wave6, NULL);
    sfRenderWindow_drawSprite(window, sp->sprite_wave5, NULL);
    sfRenderWindow_drawSprite(window, sp->sprite_wave4, NULL);
    sfRenderWindow_drawSprite(window, sp->sprite_wave3, NULL);
    sfRenderWindow_drawSprite(window, sp->sprite_wave2, NULL);
    sfRenderWindow_drawSprite(window, sp->sprite_wave, NULL);
    sfRenderWindow_drawSprite(window, sp->sprite_octo, NULL);
    sfRenderWindow_drawText(window, sp->text, NULL);
    sfRenderWindow_drawText(window, sp->score, NULL);
}

void draw_anim(sfRenderWindow *w, sprite_t *sp)
{
    posi_wave(sp->clock1, &sp->pos_wave, sp->sprite_wave, &sp->x_wave);
    posi_wave2(sp->clock2, &sp->pos_wave2, sp->sprite_wave2, &sp->x_wave2);
    posi_wave3(sp->clock3, &sp->pos_wave3, sp->sprite_wave3, &sp->x_wave3);
    posi_wave4(sp->clock4, &sp->pos_wave4, sp->sprite_wave4, &sp->x_wave4);
    posi_wave5(sp->clock5, &sp->pos_wave5, sp->sprite_wave5, &sp->x_wave5);
    posi_wave6(sp->clock6, &sp->pos_wave6, sp->sprite_wave6, &sp->x_wave6);
    posi_wave7(sp->clock7, &sp->pos_wave7, sp->sprite_wave7, &sp->x_wave7);
    anim_octo(sp->clock8, &sp->rect_octo, sp->sprite_octo);
    posi_octo(sp->clock9, sp->sprite_octo, &sp->y_octo, sp);
    draw(w, sp);
}

void my_put_str(const char *str)
{
    int i = 0;

    for (i = 0; str[i]; i++)
        my_put_char(str[i]);
}

void my_put_char(char c)
{
    write(1, &c, 1);
}