/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loandrad <loandrad@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:10:32 by loandrad          #+#    #+#             */
/*   Updated: 2023/11/23 10:46:03 by loandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(5, 0);
    Point c(5, 5);
    Point point(4, 2);

    if((point.getX() == a.getX() && point.getY() == a.getY())
    || (point.getX() == b.getX() && point.getY() == b.getY())
    || (point.getX() == c.getX() && point.getY() == c.getY()))
        std::cout << "The point is outside the triangle" << std::endl;
    else if (bsp(a, b, c, point))
        std::cout << "The point is inside the triangle" << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl;
    return (0);
}
