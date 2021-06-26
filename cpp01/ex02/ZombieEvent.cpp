#include "ZombieEvent.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

ZombieEvent::ZombieEvent()
		:
		type("none")
{
	std::cout << "ZombieEvent was constructed" << std::endl;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, type));
}

void ZombieEvent::setZombieType(std::string _type)
{
	type = _type;
}

void ZombieEvent::randomChump()
{
	std::string names[5] = {"Karl", "Ivan", "Artur", "Lida", "Rucala"};
	Zombie zombie = Zombie(names[std::rand() % 5], type);
	zombie.announce();
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent was distracted" << std::endl;
}