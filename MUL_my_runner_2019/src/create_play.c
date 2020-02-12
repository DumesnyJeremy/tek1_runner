/*
** EPITECH PROJECT, 2019
** Texture all Srpite
** File description:
** Texture 1/2/3
*/

#include "../include/my_runner.h"

sprite_t *create_play_sprite(sprite_t *sp)
{
    sp->texture_play = sfTexture_createFromFile("other/game_menu.png", NULL);
    if (!sp->texture_play)
        return NULL;
    sp->sprite_play = sfSprite_create();
    sfSprite_setTexture(sp->sprite_play, sp->texture_play, sfTrue);
}

int sound(sprite_t *test)
{
    test->music_shoot = sfMusic_createFromFile("other/offf.ogg");
    if (!test->music_shoot)
        return 84;
    return (0);
}

int score(sprite_t *sp)
{
    char *sc = NULL;
    my_put_nbr(sp->nb, &sc);
    sp->font = sfFont_createFromFile("other/04b_25.ttf");
    if (!sp->font)
        return 84;
    sp->score = sfText_create();
    sfText_setString(sp->score, sc);
    sfText_setFont(sp->score, sp->font);
    sfText_setPosition(sp->score, (sfVector2f){340, 0});
    sfText_setCharacterSize(sp->score, 50);
    return 0;
}
