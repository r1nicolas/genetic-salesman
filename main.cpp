// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rnicolas <rnicolas@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 20:04:27 by rnicolas          #+#    #+#             //
//   Updated: 2015/02/12 17:37:43 by aguilbau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Map.class.hpp"
#include "Vertex.class.hpp"
#include "Organism.class.hpp"
#include "constants.h"

void	insert(std::vector<double> &v, double score, unsigned int index, unsigned int size)
{
	double	tmp1, tmp2;

	tmp2 = v[index];
	for (unsigned int i = index; i < size - 1; ++i) {
		tmp1 = v[i + 1];
		v[i + 1] = tmp2;
		tmp2 = tmp1;
	}
	v[index] = score;
}

void	insert(std::vector<Organism> &v, Organism &score, unsigned int index, unsigned int size)
{
	Organism	tmp1, tmp2;

	tmp2 = v[index];
	for (unsigned int i = index; i < size - 1; ++i) {
		tmp1 = v[i + 1];
		v[i + 1] = tmp2;
		tmp2 = tmp1;
	}
	v[index] = score;
}

void	x_best(unsigned int x, std::vector<Organism> &v_organism,
		std::vector<Organism> &v_organism_next, std::vector<double> &v_score)
{
	std::vector<double> v_best(x);

	for (unsigned int i = 0; i < x; ++i) {
		v_best[i] = v_score[i];
		v_organism_next[i] = v_organism[i];
	}

	std::sort(v_best.begin(), v_best.end());

	for (unsigned int i = 0; i < v_score.size(); ++i)
	for (unsigned int j = 0; j < x; ++j) {
		if (v_score[i] < v_best[j]){
			insert(v_best, v_score[i], j, x);
			insert(v_organism_next, v_organism[i], j, x);
		}
	}
	std::cout << ", best: " << v_best[0] << std::endl;
}

int		main(void)
{
	srand(time(NULL));

	Map						map(MAP_SIZE, MAX_RANGE);
	std::vector<Organism>	v_organism(ORGANISM_COUNT);
	std::vector<Organism>	v_organism_next(ORGANISM_COUNT);
	std::vector<double>		v_score(ORGANISM_COUNT);

	for(int i = 0;i < ORGANISM_COUNT;i++)
		v_organism[i] = Organism(MAP_SIZE);

	for(int g = 0; g < GENERATION_COUNT; g++) {
		for(int i = 0; i < ORGANISM_COUNT; i++)
			v_score[i] = v_organism[i].eval(map);

		std::cout << "gen: " << g;

		x_best(XBEST, v_organism, v_organism_next, v_score);

		for (unsigned int i = XBEST; i < ORGANISM_COUNT; i++)
			v_organism_next[i] = Organism(v_organism[rand() % ORGANISM_COUNT], v_organism[rand() % ORGANISM_COUNT]);

		v_organism = v_organism_next;
	}

	return (0);
}
