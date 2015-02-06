// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Vertex.class.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rnicolas <rnicolas@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 20:18:23 by rnicolas          #+#    #+#             //
//   Updated: 2015/02/06 20:52:24 by rnicolas         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VERTEX_CLASS_HPP
# define VERTEX_CLASS_HPP

class Vertex
{
private:
	double	_x;
	double	_y;
public:
	Vertex();
	Vertex(double x, double y);
	Vertex(Vertex const &ori);
	~Vertex();

	Vertex	&operator=(Vertex &rhs);

	double	distance_to(Vertex const &v) const;
};

#endif
