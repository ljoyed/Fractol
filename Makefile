NAME = fractol

CC = gcc

CFLAGS = -Werror -Wall -Wextra -fsanitize=address

RM = rm -rf

SRCS = 	color.c\
		events.c\
		fractol.c\
		help.c\
		init.c\
		jul_man.c\
		parse.c\
		render.c\
		utils.c\
		utils2.c\

INCLUDES = mlx/libmlx.a

MLX_LIB = -Lmlx -lmlx -framework OpenGL -framework AppKit

$(NAME) :
	$(CC) $(SRCS) -o $(NAME) $(CFLAGS) $(INCLUDES) $(MLX_LIB)


all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(NAME)

re : fclean all