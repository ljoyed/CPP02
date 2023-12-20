/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:01:26 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/22 12:44:32 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float a, const float b) : x(a), y(b) {}

Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

Point::~Point() {}

Point& Point::operator=(const Point &obj)
{
    if (this != &obj)
    {
        const_cast<Fixed&>(x) = obj.x;
        const_cast<Fixed&>(y) = obj.y;
    }
    return *this;
}

Fixed Point::getX(void) const
{
    return (this->x);
}

Fixed Point::getY(void) const
{
    return (this->y);
}
