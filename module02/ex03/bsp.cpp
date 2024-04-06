/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:23:18 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/06 18:02:30 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"



bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	vp1 = (a.getX() - point.getX()) * (b.getY() - point.getY())
				- (a.getY() - point.getY()) * (b.getX() - point.getX());
	Fixed	vp2 = (b.getX() - point.getX()) * (c.getY() - point.getY())
				- (b.getY() - point.getY()) * (c.getX() - point.getX());
	Fixed	vp3 = (c.getX() - point.getX()) * (a.getY() - point.getY())
				- (c.getY() - point.getY()) * (a.getX() - point.getX());

	if (vp1 > 0 && vp2 > 0 && vp3 > 0)
		return (true);
	else if (vp1 < 0 && vp2 < 0 && vp3 < 0)
		return (true);
	else if (vp1 == 0 && vp2 == 0 && vp3 == 0)
		return (true);
	return (false);
}
