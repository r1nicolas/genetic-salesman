// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Vertex.class.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rnicolas <rnicolas@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 20:18:23 by rnicolas          #+#    #+#             //
//   Updated: 2015/02/06 20:36:45 by rnicolas         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

class Vertex
{
private:
	double	_x;
	double	_y;
public:
	Vertex();
	Vertex(double x, double y);
	Vertex(Vertex &ori);
	~Vertex();

	Vertex	&operator=(Vertex &rhs);

	double	distance_to(Vertex const &v) const;
};
