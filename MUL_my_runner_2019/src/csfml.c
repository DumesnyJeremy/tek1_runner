/*
** EPITECH PROJECT, 2019
** csflm
** File description:
** oui
*/

#include "../include/my_runner.h"

int loose(sprite_t *sp)
{
    if ((sp->pos_miss.x >= sp->pos_octo.x
    && sp->pos_miss.x + 160 <= sp->pos_octo.x + 450)
    && (sp->pos_miss.y >= sp->pos_octo.y
    && sp->pos_miss.y + 41 <= sp->pos_octo.y + 217)) {
        sp->game_sc = -1000;
        return (1);
    }
    if ((sp->pos_shark.x >= sp->pos_octo.x
    && sp->pos_shark.x + 200 <= sp->pos_octo.x + 450)
    && (sp->pos_shark.y >= sp->pos_octo.y
    && sp->pos_shark.y + 114 <= sp->pos_octo.y + 217)) {
        sp->game_sc = -1000;
        return (1);
    }
    else
        return (0);
}

void loop(sfRenderWindow *w, sprite_t *sp, char *pathname)
{
    char *buffer = malloc(sizeof(char) * 100000);
    int fd = open(pathname, O_RDONLY);
    if (fd == -1)
        sfRenderWindow_close(w);
    read(fd, buffer, 100000);
    sfClock *clock14 = sfClock_create();
    sfTime time1;
    float seconds;
    time1 = sfClock_getElapsedTime(clock14);
    seconds = time1.microseconds / 1000000.0;
    int j = 0;
    int i = 0;
    while (sfRenderWindow_isOpen(w)) {
        time1 = sfClock_getElapsedTime(clock14);
        seconds = time1.microseconds / 1000000.0;
        int l = loose(sp);
        manage_event(w, sp);
        if (sp->game_sc == 0)
            sfRenderWindow_drawSprite(w, sp->sprite_play, NULL);
            in_game(w, sp);
        if (sp->game_sc > 0) {
            draw_anim(w, sp);
            draw_rd_map(w, sp, i, buffer);
            if (seconds > 1 && sp->pos_miss.x >= 1920 
            && sp->pos_shark.x >= 1920) {
                i++;
                sp->nb += 100;
                score(sp);
                sfClock_restart(clock14);
                if (buffer[i] == '\0')
                    i = 0;
            }
        }
        if (sp->game_sc < 0) {
            dead_game(w, sp);
            die_event(w, sp);
        }
        manage_event(w, sp);
        sfRenderWindow_display(w);
    }
}

int main(int ac, char **av)
{
    const char *desc = "\n The game you will see is an epitech project, named"
    "My Runner, jump to survive and to escape"
    "\n press space to jump"
    "\n Usage : ./my_hunter\n";
    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h')) {
        my_put_str(desc);
        return (0);
    }
    sfVideoMode m = {1920, 1080, 32};
    sprite_t *sp = malloc(sizeof(sprite_t));
    sfRenderWindow *w = sfRenderWindow_create(m, "My Runner", 2 | 4, NULL);
    if (!w)
        return 0;
    init_all(sp, w);
    loop(w, sp, av[1]);
    destroy(w, sp);
    free(sp);
}

void init_all(sprite_t *sp, sfRenderWindow *w)
{
    sfRenderWindow_setFramerateLimit(w, 60);
    sp = init_struct(w, sp);
    sp->game_sc = 0;
    score(sp);
}