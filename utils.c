/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:36:19 by loandrad          #+#    #+#             */
/*   Updated: 2023/06/05 13:08:27 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

/* clean_exit:
*	Destroys the window, the MLX image and the MLX instance,
*	and frees the color palette, before ending the MLX loop
*	and destroying the display. Exits the process with the provided
*	exit code.
*/
void	clean_exit(int exit_code, t_fractol *f)
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
		mlx_loop_end(f->mlx);
		mlx_destroy_display(f->mlx);
		free(f->mlx);
	}
	exit(exit_code);
}

/* end_fractol:
*	Exits cleanly from the program.
*	This function is registered to an MLX hook: whenever the
*	user hits the right button, this function will be called
*	automatically.
*/
int	end_fractol(t_fractol *mlx)
{
	clean_exit(0, mlx);
	return (0);
}

int	error(char *str1, int errno)
{
	write(2, "Fractol: ", 9);
	write(2, str1, ft_strlen(str1));
	write(2, "\n", 1);
	return (errno);
}
