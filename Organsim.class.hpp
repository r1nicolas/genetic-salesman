// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Organism.class.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: aguilbau <aguilbau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/02/06 21:07:14 by aguilbau          #+#    #+#             //
//   Updated: 2015/02/06 21:12:29 by aguilbau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ORGANISM_CLASS_HPP
#define ORGANISM_CLASS_HPP

# include "Vertex.class.hpp"
# include <list>

class Organism {

	std::list<int>		_path;

public:

	Organism(void);
	Organism(Organism const& src);
	~Organism(void);

	void			add_point(unsigned int i);

	Organism& operator=(Organism const& rhs);

};

#endif //!ORGANSIM_CLASS_HPP
