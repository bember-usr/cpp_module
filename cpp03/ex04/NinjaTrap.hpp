#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
//чтобы не дублировались классы. один раз будет вызван конструктор ClapTrap
class NinjaTrap: public virtual ClapTrap {
protected:
	NinjaTrap();
public:
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &other);
	virtual ~NinjaTrap();
public:
	NinjaTrap	&operator=(NinjaTrap const &other);

	//полиморфизм
	void		ninjaShoebox(ClapTrap &trap);
	void		ninjaShoebox(FragTrap &trap);
	void		ninjaShoebox(ScavTrap &trap);
	void		ninjaShoebox(NinjaTrap &trap);
	std::string	getname(void);
};

#endif