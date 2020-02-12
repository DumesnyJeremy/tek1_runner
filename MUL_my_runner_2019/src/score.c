/*
** EPITECH PROJECT, 2019
** Texture all Srpite
** File description:
** Texture wave 1/2/3/4/5
*/

#include "../include/my_runner.h"

int my_strlen(char const *str)
{
    int count = 0;
    if (str == NULL)
        return (0);
    while (str[count] != '\0')
    {
        count++;
    }
    return (count);
}

char *my_strcat(char *dest, char const *src, int n)
{
    int a = 0, b = 0;
    char *copy = malloc(sizeof(char) * (my_strlen(dest) + n + 1));
    if (dest != NULL) {
        while (dest[a] != '\0') {
    copy[a] = dest[a];
            a++;
        }
        free (dest);
    }
    while (b < n && src[b] != '\0') {
        copy[a] = src[b];
        a++;
        b++;
    }
    copy[a] = '\0';
    return (copy);
}

void my_put_nbr(int n, char **stock)
{
    int modulo;
    int a = 10;
    char sp;

    if (n > -1)
    {
        if (n < 10) {
            sp = 48 + n % 10;
            *stock = my_strcat(*stock, &sp, 1);
        }
        else {
            modulo = (n % a);
            n = (n - modulo) / a;
            my_put_nbr(n, stock);
            sp = modulo + 48;
            *stock = my_strcat(*stock, &sp, 1);
        }
    }
}

int createtext(sprite_t *sp)
{
    sp->font = sfFont_createFromFile("other/04b_25.ttf");
    if (!sp->font)
        return 84;
    sp->text = sfText_create();
    sfText_setString(sp->text, "Your score is :");
    sfText_setFont(sp->text, sp->font);
    sfText_setCharacterSize(sp->text, 50);
    return 0;
}

int createtext2(sprite_t *sp)
{
    sp->font = sfFont_createFromFile("other/04b_25.ttf");
    if (!sp->font)
        return 84;
    sp->text2 = sfText_create();
    sfText_setString(sp->text2, "You are dead\n   NICE TRY");
    sfText_setFont(sp->text2, sp->font);
    sfText_setPosition(sp->text2, (sfVector2f){450, 600});
    sfText_setCharacterSize(sp->text2, 150);
    return 0;
}