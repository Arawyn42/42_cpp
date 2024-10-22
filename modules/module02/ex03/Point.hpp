/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:23:38 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/06 18:51:44 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
	#define POINT_HPP

	#include "Fixed.hpp"

	#define END_COLOR	"\033[0m"
	#define RED			"\033[31m"
	#define GREEN		"\033[32m"
	#define CYAN		"\033[36m"

	class Point
	{
	public:
		/* Constructors */
		Point();
		Point(const float x, const float y);
		Point(const Point &point);
		Point &operator=(const Point &point);
		~Point();
		/* Setters / Getters */
		Fixed	getX() const;
		Fixed	getY() const;
	private:
		const Fixed	_x;
		const Fixed	_y;
	};
	
	std::ostream	&operator<<(std::ostream& stream, const Point& point);
	
	bool	bsp( Point const a, Point const b, Point const c, Point const point);
	

#endif