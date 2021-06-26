#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::~HumanB() {}

HumanB::HumanB(std::string _name): name(_name) {}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &(_weapon);
}