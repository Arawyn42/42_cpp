/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 02:14:14 by drenassi          #+#    #+#             */
/*   Updated: 2024/04/06 03:06:31 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
	#define FIXED_HPP

	#include <cstdlib>
	#include <iostream>

	class Fixed
	{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();

		void	setRawBits(int const value);
		int		getRawBits() const;
	private:
		int					_value;
		static const int	_bits = 8;
	};
	
	


#endif