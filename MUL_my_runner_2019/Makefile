##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oui
##

NAME	=	my_runner

SRC	=	src/crea_sprite_bg1.c \
		src/crea_sprite_bg2.c \
		src/create_play.c \
		src/csfml.c \
		src/draw.c \
		src/event.c \
		src/init_struct.c \
		src/sprite.c \
		src/para_w.c \
		src/para_w2.c \
		src/para_w3.c \
		src/para_w4.c \
		src/para_w5.c \
		src/para_w6.c \
		src/para_w7.c \
		src/anim_fish.c \
		src/anim_miss.c \
		src/anim_shark.c \
		src/score.c \
		src/dead_sc.c

OBJ	=	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME) :	$(OBJ)
		gcc $(SRC) -o $(NAME) -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio -g3

clean	:
		rm -f $(OBJ)

fclean  :	clean
		rm -f $(NAME)

re	:	fclean all
