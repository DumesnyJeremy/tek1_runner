/*
** EPITECH PROJECT, 2019
** lib.h
** File description:
** My hunter
*/

#ifndef MY_H
#define MY_H

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/System.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>


typedef struct sprite_s
{
    sfRenderWindow *window;
    sfMusic* music_shoot;

    sfEvent event;
    sfMouseButtonEvent mouse;
    sfVector2f cur_pos;

    int game_sc;

    sfSprite* sprite_octo;
    sfTexture* texture_octo;
    sfIntRect rect_octo;
    sfVector2f pos_octo;
    float y_octo;

    sfSprite* sprite_miss;
    sfTexture* texture_miss;
    sfIntRect rect_miss;
    sfVector2f pos_miss;
    float x_miss;

    sfSprite* sprite_shark;
    sfTexture* texture_shark;
    sfIntRect rect_shark;
    sfVector2f pos_shark;
    float x_shark;

    sfSprite* sprite_wave;
    sfTexture* texture_wave;
    sfVector2f pos_wave;
    float x_wave;

    sfSprite* sprite_wave2;
    sfTexture* texture_wave2;
    sfVector2f pos_wave2;
    float x_wave2;

    sfSprite* sprite_wave3;
    sfTexture* texture_wave3;
    sfVector2f pos_wave3;
    float x_wave3;

    sfSprite* sprite_wave4;
    sfTexture* texture_wave4;
    sfVector2f pos_wave4;
    float x_wave4;

    sfSprite* sprite_wave5;
    sfTexture* texture_wave5;
    sfVector2f pos_wave5;
    float x_wave5;

    sfSprite* sprite_wave6;
    sfTexture* texture_wave6;
    sfVector2f pos_wave6;
    float x_wave6;

    sfSprite* sprite_wave7;
    sfTexture* texture_wave7;
    sfVector2f pos_wave7;
    float x_wave7;

    sfSprite* sprite_play;
    sfTexture* texture_play;

    sfSprite* sprite_die;
    sfTexture* texture_die;

    sfText* text, *text2, *score, *life;
    sfFont* font;
    char *sc;
    int nb;

    sfClock *clock1;
    sfClock *clock2;
    sfClock *clock3;
    sfClock *clock4;
    sfClock *clock5;
    sfClock *clock6;
    sfClock *clock7;
    sfClock *clock8;
    sfClock *clock9;
    sfClock *clock10;
    sfClock *clock11;
    sfClock *clock12;
    sfClock *clock13;
    sfClock *clock14;
} sprite_t;

int main(int ac, char **av);
void draw(sfRenderWindow *window, sprite_t *sp);
void draw_anim(sfRenderWindow *w, sprite_t *sp);
void loop(sfRenderWindow *w, sprite_t *sp, char *filepath);

sprite_t *create_wave_sprite(sprite_t *sp);
sprite_t *pos_sprite_wave(sprite_t *sp);
sprite_t *create_wave2_sprite(sprite_t *sp);
sprite_t *create_wave3_sprite(sprite_t *sp);
sprite_t *create_wave4_sprite(sprite_t *sp);
sprite_t *create_wave5_sprite(sprite_t *sp);
sprite_t *create_wave6_sprite(sprite_t *sp);
sprite_t *create_wave7_sprite(sprite_t *sp);
sprite_t *create_play_sprite(sprite_t *sp);

sprite_t *init_struct(sfRenderWindow *window, sprite_t *sp);
void init_all(sprite_t *sp, sfRenderWindow *w);
sprite_t *destroy(sfRenderWindow *window, sprite_t *sp);

sprite_t *pos_sprite_wave(sprite_t *sp);
void posi_wave(sfClock *, sfVector2f *pos_w, sfSprite *s1, float *x_wave);
void move_wave(sfVector2f *pos_wave, float *x_wave);

sprite_t *pos_sprite_wave2(sprite_t *sp);
void posi_wave2(sfClock *, sfVector2f *pos_w2, sfSprite *s2, float *x_wave2);
void move_wave2(sfVector2f *pos_wave2, float *x_wave2);

sprite_t *pos_sprite_wave3(sprite_t *sp);
void posi_wave3(sfClock *, sfVector2f *pos_w3, sfSprite *s3, float *x_wave3);
void move_wave3(sfVector2f *pos_wave3, float *x_wave3);

sprite_t *pos_sprite_wave4(sprite_t *sp);
void posi_wave4(sfClock *, sfVector2f *pos_w4, sfSprite *s4, float *x_wave4);
void move_wave4(sfVector2f *pos_wave4, float *x_wave4);

sprite_t *pos_sprite_wave5(sprite_t *sp);
void posi_wave5(sfClock *, sfVector2f *pos_w5, sfSprite *s5, float *x_wave5);
void move_wave5(sfVector2f *pos_wave5, float *x_wave5);

sprite_t *pos_sprite_wave6(sprite_t *sp);
void posi_wave6(sfClock *, sfVector2f *pos_w6, sfSprite *s6, float *x_wave6);
void move_wave6(sfVector2f *pos_wave6, float *x_wave6);

sprite_t *pos_sprite_wave7(sprite_t *sp);
void posi_wave7(sfClock *, sfVector2f *pos_w7, sfSprite *s7, float *x_wave7);
void move_wave7(sfVector2f *pos_wave7, float *x_wave7);

sprite_t *create_octo_sprite(sprite_t *sp);
void move_rect_octo(sfIntRect *rect_octo, int offset, int max_value);
void move_octo(sprite_t *sp, float *y_octo);
sprite_t *pos_sprite_octo(sprite_t *sp);
void anim_octo(sfClock *clock8, sfIntRect *rect_octo, sfSprite *sprite_octo);
void posi_octo(sfClock *cl9, sfSprite *s9, float *y_octo, sprite_t *sp);

sprite_t *create_miss_sprite(sprite_t *sp);
void move_rect_miss(sfIntRect *rect_miss, int offset, int max_value);
void move_miss(sprite_t *sp, float *x_miss);
sprite_t *pos_sprite_miss(sprite_t *sp);
void anim_miss(sfClock *clock10, sfIntRect *rect_miss, sfSprite *sprite_miss);
void posi_miss(sfClock *cl11, sfSprite *s10, float *x_miss, sprite_t *sp);

sprite_t *create_shark_sprite(sprite_t *sp);
void move_rect_shark(sfIntRect *rect_shark, int offset, int max_value);
void move_shark(sprite_t *sp, float *x_shark);
sprite_t *pos_sprite_shark(sprite_t *sp);
void anim_shark(sfClock *clock12, sfIntRect *rect_shark, sfSprite *);
void posi_shark(sfClock *cl13, sfSprite *s10, float *x_shark, sprite_t *sp);

int hitbox(sprite_t *sp);
void in_game(sfRenderWindow *w, sprite_t *sp);
int manage_event(sfRenderWindow *window, sprite_t *sp);
void jump_octo(sfRenderWindow *w, sprite_t *sp);
void draw_rd_map(sfRenderWindow *window, sprite_t *sp, int i, char *buffer);

int score(sprite_t *);
int createtext(sprite_t *test);
int createtext2(sprite_t *sp);
int die_event(sfRenderWindow *window, sprite_t *sp);
void dead_game(sfRenderWindow *window, sprite_t *sp);
int sound(sprite_t *test);

void my_put_char(char c);
void my_put_str(const char *str);
void my_put_nbr(int nb, char **stock);
char *my_strcat(char *dest, char const *src, int n);
int my_strlen(char const *str);

#endif