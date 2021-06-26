#ifndef HUMANA_HPP_
#define HUMANA_HPP_

#include "Weapon.hpp"
#include <iostream>

class HumanA {
private:
	HumanA();
	Weapon &weapon;
	std::string name;
public:
	~HumanA();
	HumanA(std::string name, Weapon &_weapon);
public:
	void	attack();
};

#endif