// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Map.class.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 20:33:31 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/12 17:31:48 by aguilbau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MAP_CLASS_HPP
# define MAP_CLASS_HPP

# include "Vertex.class.hpp"
# include <vector>
# include <stdlib.h>
# include <time.h>

class Map {

	std::vector<Vertex>	_points;

	void				populate(unsigned int max_rand);

public:

	Map();
	Map(unsigned int size, unsigned int max_rand);
	Map(Map &m);
	~Map();

	Map				&operator=(Map const &m);
	const Vertex	&operator[](int i) const;

};

#endif
