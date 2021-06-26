#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

#include <string>
#include <iostream>

class Zombie {
private:
	std::string name;
	std::string type;
public:
	Zombie();
	Zombie(std::string _name, std::string _type);
	~Zombie();
public:
	void	setName(std::string _name);
	void	setType(std::string _type);
	void	announce();
};

#endif