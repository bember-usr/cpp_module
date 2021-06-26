#include "Zomby.hpp"

Zomby::Zomby(std::string name, std::string type): _name(name), _type(type)
{
	std::cout << "Zomby " << _name << " with type " << _type << " was constructed " << std::endl;
}

Zomby::~Zomby()
{
	std::cout << "Zomby " << _name << " was distracted" << std::endl;
}

void Zomby::brains()
{
	std::cout << "<Zomby " << _name << " (" << _type << ")> want to Braiiiiiiinnnssss..." << std::endl;
}

Zomby::Zomby()
{
	std::cout << "Zombie " << _name << " constructed" << std::endl;
}