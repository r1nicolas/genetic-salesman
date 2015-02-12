// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Map.class.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 20:33:30 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/12 17:17:25 by aguilbau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Map.class.hpp"

Map::Map() : _points(0) {

}

Map::Map(Map &m) {

	*this = m;

}

Map::Map(unsigned int size) : _points(size) {

	this->populate();

}

Map::~Map() {

}

void		Map::populate(void) {

	unsigned int size = this->_points.size();

	for (unsigned int i = 0; i < size; ++i) {
		this->_points[i] = Vertex(rand() % 1000, rand() % 1000);
	}

}

Map				&Map::operator=(Map const &m) {

	this->_points = m._points;

	return *this;

}

const Vertex	&Map::operator[](int i) const {

	return this->_points[i];
}
