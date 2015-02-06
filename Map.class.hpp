// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Map.class.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 20:33:31 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/06 20:57:25 by aguilbau         ###   ########.fr       //
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

	void				populate(void);

public:

	Map();
	Map(unsigned int size);
	Map(Map &m);
	~Map();

	Map			&operator=(Map const &m);

};

#endif
