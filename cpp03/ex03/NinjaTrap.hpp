#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap {
private:
	NinjaTrap();
public:
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &other);
	virtual ~NinjaTrap();
public:
	NinjaTrap	&operator=(NinjaTrap const &other);
	//перегрузка
	void		ninjaShoebox(ClapTrap &trap);
	void		ninjaShoebox(FragTrap &trap);
	void		ninjaShoebox(ScavTrap &trap);
	void		ninjaShoebox(NinjaTrap &trap);
	std::string	getname();
};

#endif