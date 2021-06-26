#ifndef ZOMBIEHORDE_HPP_
#define ZOMBIEHORDE_HPP_

#include "Zombie.hpp"

class ZombieHorde {
private:
	Zombie *zombies;
	unsigned int zombie_count;
	ZombyHorde();
public:
	ZombieHorde(int nbr);
	~ZombieHorde();
public:
	void	brain();
};

#endif