/*
** EPITECH PROJECT, 2019
** oui
** File description:
** move pixel
*/

#include "../include/my_runner.h"

int manage_event(sfRenderWindow *window, sprite_t *sp)
{
    while (sfRenderWindow_pollEvent(window, &sp->event))
    {
        if (sp->event.type == sfEvtMouseButtonPressed
        && hitbox(sp)) {
            sfRenderWindow_clear(window, sfBlack);
        sp->game_sc++;
        }
        if (sp->event.type == sfEvtKeyPressed) {
            if (sp->event.key.code == sfKeySpace)
                jump_octo(window, sp);
                sfMusic_play(sp->music_shoot);
        }
        else if (sp->event.type == sfEvtClosed
            || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(window);
    }
}

void jump_octo(sfRenderWindow *w, sprite_t *sp)
{
    int y = 300;
    sp->y_octo = y;
}

void in_game(sfRenderWindow *w, sprite_t *sp)
{
    sp->cur_pos.x = sfMouse_getPosition((const sfWindow *)w).x;
    sp->cur_pos.y = sfMouse_getPosition((const sfWindow *)w).y;
}

int hitbox(sprite_t *sp)
{
    if ((sp->cur_pos.x >= 807
    && sp->cur_pos.x <= 1110)
    && (sp->cur_pos.y >= 282
    && sp->cur_pos.y <= 417)) {
        return (1);
    }
    else
        return (0);
}