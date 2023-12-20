/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:03:53 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/21 11:59:24 by loandrad         ###   ########.fr       */
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
    void setRawBits(const int raw);
    float toFloat(void) const;
    int toInt(void) const;
    bool operator >(const Fixed &obj) const;
    bool operator <(const Fixed &obj) const;
    bool operator >=(const Fixed &obj) const;
    bool operator <=(const Fixed &obj) const;
    bool operator ==(const Fixed &obj) const;
    bool operator !=(const Fixed &obj) const;
    Fixed operator +(const Fixed &obj) const;
    Fixed operator -(const Fixed &obj) const;
    Fixed operator *(const Fixed &obj) const;
    Fixed operator /(const Fixed &obj) const;
    Fixed& operator ++();
    Fixed operator ++(int i);
    Fixed& operator --();
    Fixed operator --(int i);
    static  Fixed& min(Fixed &one, Fixed &two);
    static  Fixed& max(Fixed &one, Fixed &two);
    static  const Fixed& min(const Fixed &one, const Fixed &two);
    static  const Fixed& max(const Fixed &one, const Fixed &two);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif