#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <string>

class Weapon {
private:
	std::string type;
	Weapon();
public:
	Weapon(std::string _type);
	~Weapon();
public:
	std::string	&getType();
	void		setType(std::string _type);
};

#endif