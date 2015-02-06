// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Vertex.class.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rnicolas <rnicolas@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 20:21:56 by rnicolas          #+#    #+#             //
//   Updated: 2015/02/06 20:28:06 by rnicolas         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <cmath>
#include "Vertex.class.hpp"

Vertex::Vertex() : _x(0), _y(0)
{
}

Vertex::Vertex(double _x, double _y): _x(x), _y(y)
{
}

double	distance_to(Vertex const &v) const
{
	return (sqrt(pow(this->_x - v._x, 2) +  pow(this->_y - v._y, 2)));
}
