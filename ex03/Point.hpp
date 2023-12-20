/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:01:29 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/22 18:27:01 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;

    public:
        Point();
        Point(const float a, const float b);
        Point(const Point &obj);
        Point& operator=(const Point &obj);
        ~Point();
        Fixed getX(void) const;
        Fixed getY(void) const;
};

float   float_abs(float i);
float   triangleArea(const Point& a, const Point& b, const Point& c);
bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif