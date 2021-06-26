#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon {
public:
	PowerFist();
	PowerFist(PowerFist const &other);
	virtual ~PowerFist();
public:
	PowerFist	&operator=(PowerFist const &other);

	void		attack() const;
};

#endif