# Makefile

NAME = Tic_tac_toe


SRCS = main.c \
initialise.c \
boarddisplay.c \
computer_plays.c \
win_condition.c \
player_plays.c \
draw.c \
number_attribuation.c


all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)


re: fclean all
