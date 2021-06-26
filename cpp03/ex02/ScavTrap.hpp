#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
private:
	static const unsigned int ccount = 5;
	static const std::string challenges[ccount];
	ScavTrap();
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);
	virtual ~ScavTrap();
public:
	ScavTrap	&operator=(ScavTrap const &other);

	void		challengeNewcomer();
};

#endif