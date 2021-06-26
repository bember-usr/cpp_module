#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy {
public:
	RadScorpion();
	RadScorpion(RadScorpion const &other);
	virtual ~RadScorpion();
public:
	RadScorpion	&operator=(RadScorpion const &other);
};

#endif