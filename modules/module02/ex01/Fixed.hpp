/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:14:14 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/06 03:48:42 by drenassi         ###   ########.fr       */
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
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();

		void	setRawBits(int const value);
		int		getRawBits() const;

		int		toInt() const;
		float	toFloat() const;
	private:
		int					_value;
		static const int	_bits = 8;
	};
	
	std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif