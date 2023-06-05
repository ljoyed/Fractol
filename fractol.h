/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:30:25 by loandrad          #+#    #+#             */
/*   Updated: 2023/06/05 18:39:29 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include <stdio.h>
# include <math.h>
# include <unistd.h>
# include <stdlib.h>

/*  Dimensions and Keys	*/
# define WIDTH 900
# define HEIGHT 900
# define MAX_ITERATIONS 60
# define EVENT_CLOSE_BTN 17
# define KEY_ESC 65307
# define KEY_UP 65362
# define KEY_DOWN 65364
# define KEY_LEFT 65361
# define KEY_RIGHT 65363
# define KEY_SPACE 32
# define KEY_ONE 49
# define KEY_TWO 50
# define MOUSE_WHEEL_UP 4
# define MOUSE_WHEEL_DOWN 5
# define MOUSE_WHEEL_BTN 3
# define MOUSE_BTN 1
# define MOUSE_BTN_2 3
# define KEY_K 107

/*  Fractal sets	*/
# define MANDELBROT 1
# define JULIA 2

typedef struct s_fractol
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*buf;
	int		set;
	double	min_r;
	double	max_r;
	double	min_i;
	double	max_i;
	double	kr;
	double	ki;
	double	sx;
	double	rx;
	double	fx;
	int		*palette;
	int		color_pattern;
	int		color;
}	t_fractol;

/*  Fractal Sets   */
int		mandelbrot(double cr, double ci);
int		julia(t_fractol *f, double zr, double zi);

/*  Draw Fractal	*/
void	render(t_fractol *f);
int		julia_shift(int x, int y, t_fractol *f);

/* Colors	*/
void	color_shift(t_fractol *f);
void	set_color_mono(t_fractol *f, int color);
void	set_color_multiple(t_fractol *f, int colors[4], int n);
int		get_percent_color(int color, double percent);

/*  Events   */
int		key_event(int keycode, t_fractol *mlx);
int		mouse_event(int keycode, int x, int y, t_fractol *mlx);

/* Initialization */
void	clean_init(t_fractol *f);
void	reinit_img(t_fractol *f);
void	init(t_fractol *f);
void	get_complex_layout(t_fractol *f);
double	ft_atof(char *str);

/*  Utils   */
int		end_fractol(t_fractol *mlx);
void	clean_exit(int error_code, t_fractol *f);
void	help_msg(t_fractol *f);
void	print_controls(void);
int		error(char *str1, int errno);
int		ft_strlen(const char *str);
int		ft_isdigit(int c);
int		ft_isspace(int c);

#endif