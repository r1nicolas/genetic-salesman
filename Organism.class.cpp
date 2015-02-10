// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Organism.class.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 21:07:23 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/09 18:05:39 by rnicolas         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <algorithm>
#include "Organism.class.hpp"

static void		shuffle(int *arr, size_t n)
{
	unsigned int	i, j;
	int				t;

	for (i = 0; i < n - 1; i++) 
	{
		j = (i + rand()) % n;
		t = arr[j];
		arr[j] = arr[i];
		arr[i] = t;
	}
}

Organism::Organism() {

}

Organism::Organism(unsigned int n) : _path(n) {

	int				tab[n];
	unsigned int	i;

	for (i = 0; i < n; ++i)
		tab[i] = i;

	shuffle(tab, n);

	for (i = 0; i < n; ++i)
		this->add_point(tab[i]);
}

Organism::Organism(Organism const& src) {

	*this = src;

}

Organism::Organism(Organism const& p1, Organism const& p2) : _path(p1._path.size())
{
	unsigned int	size, i;

	size = p1._path.size();

	for (i = 0; i < size / 2; i++)
		this->_path[i] = p1._path[i];

	for (i = 0;i < size;i++)
	{
		if (!(std::find(this->_path.begin(), this->_path.end(), p2._path[i]) != this->_path.end()))
			this->_path.push_back(p2._path[i]);

		i++;
	}
}

Organism::~Organism() {

}

Organism		&Organism::operator=(Organism const& rhs) {

	this->_path = rhs._path;

	return *this;

}

void			Organism::add_point(unsigned int i) {

	this->_path.push_back(i);

}
