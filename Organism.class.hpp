// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Organism.class.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 21:07:14 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/09 18:06:14 by rnicolas         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ORGANISM_CLASS_HPP
#define ORGANISM_CLASS_HPP

# include "Map.class.hpp"
# include <vector>

class Organism {

	std::vector<int>		_path;

public:

	Organism(void);
	Organism(unsigned int n);
	Organism(Organism const& src);
	Organism(Organism const& p1, Organism const& p2);
	~Organism(void);

	void			add_point(unsigned int i);

	double			eval(Map const &map);

	Organism& operator=(Organism const& rhs);

};

#endif //!ORGANSIM_CLASS_HPP
