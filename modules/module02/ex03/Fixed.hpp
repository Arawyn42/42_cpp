/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:14:14 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/06 04:39:08 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	#define FIXED_HPP

	#include <cstdlib>
	#include <cmath>
	#include <iostream>

	class Fixed
	{
	public:
		/* Constructors */
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		/* Operators */
		bool		operator>(const Fixed &fixed);
		bool		operator<(const Fixed &fixed);
		bool		operator>=(const Fixed &fixed);
		bool		operator<=(const Fixed &fixed);
		bool		operator==(const Fixed &fixed);
		bool		operator!=(const Fixed &fixed);
		Fixed		operator+(const Fixed &fixed);
		Fixed		operator-(const Fixed &fixed);
		Fixed		operator*(const Fixed &fixed);
		Fixed		operator/(const Fixed &fixed);
		Fixed		&operator++();
		Fixed		&operator--();
		Fixed		operator++(int);
		Fixed		operator--(int);
		/* Setters and getters */
		void		setRawBits(int const value);
		int			getRawBits() const;
		/* Methods */
		int			toInt() const;
		float		toFloat() const;
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
	private:
		int					_value;
		static const int	_bits = 8;
	};
	
	std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif