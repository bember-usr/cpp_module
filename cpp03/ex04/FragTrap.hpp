#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class  FragTrap: public virtual ClapTrap {
protected:
	FragTrap();
	static const int nbrQuotes = 8;
	static const std::string quotes[nbrQuotes];
public:
	FragTrap(FragTrap const &other);
	FragTrap(std::string const &name);
	virtual ~FragTrap();
public:
	FragTrap	&operator=(FragTrap const &other);

	void		vaulthunter_dot_exe(std::string const &target);
};


#endif