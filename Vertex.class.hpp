// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Vertex.class.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rnicolas <rnicolas@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 20:18:23 by rnicolas          #+#    #+#             //
//   Updated: 2015/02/12 16:45:37 by aguilbau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VERTEX_CLASS_HPP
# define VERTEX_CLASS_HPP

class Vertex
{
private:
public:
	double	_x;
	double	_y;

	Vertex();
	Vertex(double x, double y);
	Vertex(Vertex const &ori);
	~Vertex();

	Vertex	&operator=(Vertex const &rhs);

	double	distance_to(Vertex const &v) const;
};

#endif
