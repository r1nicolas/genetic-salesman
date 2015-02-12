// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Map.class.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 20:33:30 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/12 17:23:07 by aguilbau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Map.class.hpp"

Map::Map() : _points(0) {

}

Map::Map(Map &m) {

	*this = m;

}

Map::Map(unsigned int size, unsigned int max_rand) : _points(size) {

	this->populate(max_rand);

}

Map::~Map() {

}

void		Map::populate(unsigned int max_rand) {

	for (unsigned int i = 0; i < this->_points.size(); ++i) {
		this->_points[i] = Vertex(rand() % max_rand, rand() % max_rand);
	}
}

Map				&Map::operator=(Map const &m) {

	this->_points = m._points;

	return *this;

}

const Vertex	&Map::operator[](int i) const {

	return this->_points[i];
}
