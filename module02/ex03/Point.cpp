/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:23:29 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/06 18:36:49 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/******************************** Constructors ********************************/
/* Default constructor */
Point::Point() : _x(0), _y(0) {}

/* Basic constructor */
Point::Point(const float x, const float y) : _x(x), _y(y) {}

/* Copy constructor */
Point::Point(const Point &point) : _x(point.getX()), _y(point.getY()) {}

/* Copy assignment operator overload constructor */
Point &Point::operator=(const Point &point)
{
	(Fixed)this->_x = point.getX();
	(Fixed)this->_y = point.getY();
	return (*this);
}

/* Destructor */
Point::~Point() {}

/**************************** Setters and getters *****************************/
Fixed	Point::getX() const {	return (this->_x);	}

Fixed	Point::getY() const {	return (this->_y);	}

/********************************* Functions **********************************/
std::ostream	&operator<<(std::ostream& stream, const Point& point)
{
	stream << '(';
	stream << point.getX();
	stream << ", ";
	stream << point.getY();
	stream << ')';
	return (stream);
}