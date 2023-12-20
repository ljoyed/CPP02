/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:03:53 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/18 15:39:09 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed &obj);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif