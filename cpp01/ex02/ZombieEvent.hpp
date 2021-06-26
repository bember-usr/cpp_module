#ifndef ZOMBIEEVENT_HPP_
#define ZOMBIEEVENT_HPP_

#include "Zombie.hpp"

class ZombieEvent {
private:
	std::string type;
public:
	ZombieEvent();
	~ZombieEvent();
public:
	Zombie	*newZombie(std::string name);
	void	setZombieType(std::string _type);
	void	randomChump();
};

#endif
