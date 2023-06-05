NAME = fractol

CC = gcc

CFLAGS = -Werror -Wall -Wextra -fsanitize=address

RM = rm -rf

SRCS = 	color_interpolated.c\
		color_striped.c\
		color.c\
		events.c\
		fractol.c\
		help.c\
		init.c\
		julia.c\
		mandelbrot.c\
		parse.c\
		render.c\
		utils.c\
		utils2.c\

MLX_LIB = -Lmlx -lmlx -framework OpenGL -framework AppKit

$(NAME) :
	$(CC) $(CFLAGS) $(SRCS) $(MLX_LIB) -o $(NAME)


all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(NAME)

re : fclean all