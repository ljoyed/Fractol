/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:34:54 by loandrad          #+#    #+#             */
/*   Updated: 2023/06/05 18:35:31 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

/* print_fractal_options:
*	Prints an explanation of the fractal options that can be specified
*	at program launch.
*/
void	print_fractal_options(void)
{
	write(1, "To run program type:\n", 21);
    write(1, "./fractol mandlebrot\n", 21);
    write(1, "or\n", 3);
    write(1, "./fractol julia x.x x.x\n", 24);
    write(1, "all lower case and replace x's with decimal numbers in the range -2.0 and 2.0\n", 78);
}

/* print_controls:
*	Prints a list of program controls to the standard output when the program
*	launches successfully.
*/
void	print_controls(void)
{
	write(1, "Program Controls:\n", 18);
	write(1, "Arrow keys to move.\n", 20);
	write("Mouse wheel to zoom in and out.\n", 32);
	write("Spacebar to change color\n", 25);
	// ft_putendl_fd("Left click\t\tshift Julia set [Julia only].", 1);
	// ft_putendl_fd("1, 2\t\tswitch fractals.", 1);
	// ft_putendl_fd("ESC or close window\tquit fract'ol.", 1);
}

/* help_msg:
*	Prints a help message to the standard output to explain the program options.
*/
void	help_msg(t_fractol *f)
{
	print_fractal_options();
	clean_exit(EXIT_FAILURE, f);
}
