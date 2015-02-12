// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Organism.class.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 21:07:14 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/12 17:42:41 by aguilbau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ORGANISM_CLASS_HPP
# define ORGANISM_CLASS_HPP

# include "Map.class.hpp"
# include <vector>

class Organism {

	std::vector<int>		_path;
	static unsigned int		_mutation_probability;

public:

	Organism(void);
	Organism(unsigned int n);
	Organism(Organism const& src);
	Organism(Organism const& p1, Organism const& p2);
	~Organism(void);

	std::vector<int>	getPath(void) const;
	void				mutate(void);
	double				eval(Map const &map);

	Organism& operator=(Organism const& rhs);

};

std::ostream		&operator<<(std::ostream &o, Organism const &e);

#endif //!ORGANSIM_CLASS_HPP
