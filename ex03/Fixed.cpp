/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:03:57 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/21 11:59:54 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){}

Fixed::Fixed(const int num) : value(num << fractionalBits){}

Fixed::Fixed(const float num) : value(std::round(num * (1 << fractionalBits))){}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    if (this != &obj)
        value = obj.value;
    return *this;
}

Fixed::~Fixed(){}

int Fixed::getRawBits() const
{
    return value;
}

void Fixed::setRawBits(const int raw)
{
    value = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(value) / (1 << fractionalBits); 
}

int Fixed::toInt(void) const
{
   return value >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

bool Fixed::operator >(const Fixed &obj) const
{
    return (this->value > obj.value);
}

bool Fixed::operator <(const Fixed &obj) const
{
    return (this->value < obj.value);
}

bool Fixed::operator <=(const Fixed &obj) const
{
    return (this->value <= obj.value);
}

bool Fixed::operator >=(const Fixed &obj) const
{
    return (this->value >= obj.value);
}

bool Fixed::operator ==(const Fixed &obj) const
{
    return (this->value == obj.value);
}

bool Fixed::operator !=(const Fixed &obj) const
{
    return (this->value != obj.value);
}

Fixed Fixed::operator +(const Fixed &obj) const
{
    return (Fixed (this->toFloat() + obj.toFloat()));
}

Fixed Fixed::operator -(const Fixed &obj) const
{
    return (Fixed (this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator *(const Fixed &obj) const
{
    return (Fixed (this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator /(const Fixed &obj) const
{
    return (Fixed (this->toFloat() / obj.toFloat()));
}

Fixed& Fixed::operator ++()
{
	this->value++;
	return *this;
}

Fixed Fixed::operator ++(int i)
{
	Fixed temp(*this);
	this->value++;
	return temp;
}

Fixed& Fixed::operator --()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator --(int i)
{
	Fixed temp(*this);
	this->value--;
	return temp;
}

Fixed& Fixed::min(Fixed &one, Fixed &two)
{
	if ( one <= two)
		return one;
	else
		return two;
}

Fixed& Fixed::max(Fixed &one, Fixed &two)
{
	if ( one >= two)
		return one;
	else
		return two;
}

const Fixed& Fixed::min(const Fixed &one, const Fixed &two)
{
	if (one.value <= two.value)
		return one;
	else
		return two;
}

const Fixed& Fixed::max(const Fixed &one, const Fixed &two)
{
	if (one.value >= two.value)
		return one;
	else
		return two;
}