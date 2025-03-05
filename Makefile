NAME = fractol

SRC = ./mand/fract_ol.c ./mand/init.c ./mand/utils.c ./mand/utils2.c ./mand/event.c ./mand/color.c ./mand/mandelbrot.c ./mand/julia.c ./mand/utils3.c

RM = rm -f

INCLUDE = ./includes/fractol.h

CC = cc

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -O3

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC)  $(CFLAGS)  -fsanitize=address -g -lmlx -framework OpenGL -framework AppKit $^ -o $@

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
