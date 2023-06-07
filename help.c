/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:34:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/06/06 16:58:19 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	program_options(void)
{
	write(1, "\n", 1);
	write(1, "RUN COMMANDS:\n", 14);
	write(1, "./fractol mandelbrot\n", 21);
	write(1, "or\n", 3);
	write(1, "./fractol julia\n", 16);
	write(1, "or\n", 3);
	write(1, "./fractol julia x.x x.x\n", 24);
	write(1, "\n", 1);
	write(1, "KEEP IN MIND:\n", 14);
	write(1, "Only lower case and replace x's with decimal numbers", 52);
	write(1, " between -2.0 and 2.0\n", 22);
	write(1, "\n", 1);
}

void	help_msg(t_fractol *f)
{
	program_options();
	clean_up(EXIT_FAILURE, f);
}
