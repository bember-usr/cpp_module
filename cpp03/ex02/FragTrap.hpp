#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
private:
	static const int nbrQuotes = 8;
	static const std::string quotes[nbrQuotes];
	FragTrap();
public:
	virtual ~FragTrap();
	FragTrap(FragTrap const &other);
	FragTrap(std::string const &name);
public:
	FragTrap	&operator=(FragTrap const &other);

	void		vaulthunter_dot_exe(std::string const &target);
};

#endif