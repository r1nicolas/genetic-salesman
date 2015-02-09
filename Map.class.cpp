// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Map.class.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 20:33:30 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/06 20:57:32 by aguilbau         ###   ########.fr       //
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

	for (unsigned int i = 0; i < this->_points.size(); ++i) {
		this->_points.push_back(Vertex(rand(), rand()));
	}

}

Map			&Map::operator=(Map const &m) {

	this->_points = m._points;

	return *this;

}