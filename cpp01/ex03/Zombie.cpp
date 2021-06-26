#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
		:
		_name(name),
		_type(type)
{
	std::cout << "Zombie " << _name << " with type " << _type << " was constructed " << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " was distracted" << std::endl;
}

void Zombie::brains()
{
	std::cout << "<Zombie " << _name << " (" << _type << ")> want to Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Zombie " << _name << " constructed" << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}
	
void Zombie::setType(std::string type)
{
	_type = type;
}