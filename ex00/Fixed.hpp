/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:03:53 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/17 10:17:12 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator=(const Fixed &obj);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif