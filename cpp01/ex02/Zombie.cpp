#include <iostream>
#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string _name, std::string _type)
		:
		name(_name),
		type(_type)
{
	std::cout << "Zombie " << name << " constructed" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " distracted" << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Zombie " << name << " constructed" << std::endl;
}

void Zombie::setName(std::string _name)
{
	name = _name;
}
	
void Zombie::setType(std::string _type)
{
	type = _type;
}