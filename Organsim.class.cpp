// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Organism.class.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 21:07:23 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/06 21:12:52 by aguilbau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Organism.class.hpp"

Organism::Organism() {

}

Organism::Organism(Organism const& src) {
	*this = src;
}

Organism::~Organism() {
	return;
}

Organism		& Organism::operator=(Organism const& rhs) {
	this->
	return *this;
}

void			Organism::add_point(unsigned int i) {

	

	this->_path.push_back(i);

}
