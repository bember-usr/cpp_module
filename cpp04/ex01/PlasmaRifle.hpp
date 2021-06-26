#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &other);
	virtual ~PlasmaRifle();
public:
	PlasmaRifle	&operator=(PlasmaRifle const &other);
	void		attack() const;
};

#endif