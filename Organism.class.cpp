// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Organism.class.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 21:07:23 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/12 17:32:07 by aguilbau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <algorithm>
#include <iostream>

#include "Organism.class.hpp"
#include "Vertex.class.hpp"

static void		shuffle(int *arr, size_t n)
{
	unsigned int	i, j;
	int				t;

	for (i = 0; i < n; i++) 
	{
		j = rand() % n;
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
		this->_path[i] = tab[i];
}

Organism::Organism(Organism const& src) {

	*this = src;
}

Organism::Organism(Organism const& p1, Organism const& p2) : _path(p1._path.size())
{
	unsigned int	i, j;

	for (i = 0; i < p1._path.size() / 2; i++)
		this->_path[i] = p1._path[i];

	for (; i < p1._path.size(); i++) {
		for (j = 0;j < p1._path.size();j++)
		{
			if (!(std::find(this->_path.begin(), this->_path.begin() + i, p2._path[j]) != this->_path.begin() + i))
				this->_path[i] = p2._path[j];
		}
	}
}

Organism::~Organism() {

}

void			Organism::mutate(void) {
	
}

Organism		&Organism::operator=(Organism const& rhs) {

	this->_path = rhs._path;

	return *this;
}

double			Organism::eval(Map const &map)
{
	unsigned int	i;
	double			result = 0;

	for (i = 0; i < this->_path.size() - 1;i++)
		result += map[this->_path[i]].distance_to(map[this->_path[i + 1]]);

	return (result);
}

std::vector<int>	Organism::getPath(void) const {

	return this->_path;
}

std::ostream		&operator<<(std::ostream &o, Organism const &e) {

	std::vector<int>	v = e.getPath();

	for (unsigned int i = 0; i < v.size(); ++i) {
		o << v[i] << " ";
	}

	return o;
}

unsigned int		Organism::mutation_probability = 10;
