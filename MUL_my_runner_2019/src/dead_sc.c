/*
** EPITECH PROJECT, 2019
** oui
** File description:
** move pixel
*/

#include "../include/my_runner.h"

void dead_game(sfRenderWindow *window, sprite_t *sp)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sp->sprite_wave7, NULL);
    sfRenderWindow_drawText(window, sp->text, NULL);
    sfRenderWindow_drawText(window, sp->score, NULL);
    sfRenderWindow_drawText(window, sp->text2, NULL);
}

int die_event(sfRenderWindow *window, sprite_t *sp)
{
    while (sfRenderWindow_pollEvent(window, &sp->event))
    {
        if (sp->event.type == sfEvtKeyPressed
        && sp->game_sc < 0) {
            sp->game_sc = 1;
            sp->nb = 0;
            score(sp);
        }
        else if (sp->event.type == sfEvtClosed
            || sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(window);
    }
}