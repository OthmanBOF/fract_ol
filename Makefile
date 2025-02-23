NAME = fractol

SRC = ./mand/fract_ol.c ./mand/init.c ./mand/utils.c

RM = rm -f

INCLUDE = ./includes/fractol.h

CC = cc

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $^ -o $@

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
