# Makefile

NAME = Tic_tac_toe

SRCS = main.c \
	tic-tac-toe.h

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all