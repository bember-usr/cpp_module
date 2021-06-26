#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap {
protected:
	SuperTrap();
public:
	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &other);
	~SuperTrap();
public:
	SuperTrap	&operator=(SuperTrap const &other);

	void		meleeAttack(std::string const &target);
	void		rangedAttack(std::string const &target);
};

#endif