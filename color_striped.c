/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_striped.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:17:38 by loandrad          #+#    #+#             */
/*   Updated: 2023/06/05 17:35:00 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"


/* get_percent_color:
*	Calculates a color that is a certain percentage away
*	from the provided color. Each color channel must be calculated
*	separately. Intended to find somewhat complimentary colors.
*	(For true complimentary colors picked from the color wheel,
*	this function would need to be radically modified to use
*	HSL colors rather than RGB...)
*	Note: rgb[3] : rgb[0] = red, rgb[1] = green, rgb[2] = blue
*/
int	get_percent_color(int color, double percent)
{
	int		rgb[3];
	int		trgb[3];
	double	percentage;

	rgb[0] = (color >> 16) & 0xFF;
	rgb[1] = (color >> 8) & 0xFF;
	rgb[2] = (color >> 0) & 0xFF;
	percentage = (percent / 100) * 256;
	trgb[0] = (rgb[0] + percentage) - 256;
	trgb[1] = (rgb[1] + percentage) - 256;
	trgb[2] = (rgb[2] + percentage) - 256;
	return (0xFF << 24 | trgb[0] << 16 | trgb[1] << 8 | trgb[2]);
}
