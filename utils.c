/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:36:19 by loandrad          #+#    #+#             */
/*   Updated: 2023/06/06 14:55:47 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	clean_up(int exit_code, t_fractol *f)
{
	if (!f)
		exit(exit_code);
	if (f->palette)
		free(f->palette);
	if (f->img)
		mlx_destroy_image(f->mlx, f->img);
	if (f->win && f->mlx)
		mlx_destroy_window(f->mlx, f->win);
	if (f->mlx)
	{
		free(f->mlx);
	}
	exit(exit_code);
}

int	quit(t_fractol *mlx)
{
	clean_up(0, mlx);
	return (0);
}

int	error(char *str1, int errno)
{
	write(2, "Fractol: ", 9);
	write(2, str1, ft_strlen(str1));
	write(2, "\n", 1);
	return (errno);
}
