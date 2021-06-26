#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"
#include <iostream>

class HumanB {
private:
	Weapon *weapon;
	std::string name;
	HumanB();
public:
	~HumanB();
	HumanB(std::string _name);
public:
	void	attack();
	void	setWeapon(Weapon &_weapon);
};

#endif