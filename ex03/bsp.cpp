/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:01:15 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/23 10:43:15 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float float_abs(float i)
{
    if (i < 0)
        return (-i);
    return (i);
}

float triangleArea(const Point& a, const Point& b, const Point& c)
{
    return float_abs((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
            + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
            + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))
            / 2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float A = triangleArea(a, b, c);
    float A1 = triangleArea(point, b, c);
    float A2 = triangleArea(a, point, c);
    float A3 = triangleArea(a, b, point);
    if (!A1 || !A2 || !A3)
        return (false);
    return (A == A1 + A2 + A3);
}
