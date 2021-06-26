#ifndef BFG9000_HPP
# define BFG9000_HPP

#include "AWeapon.hpp"

class BFG9000: public AWeapon {
public:
	BFG9000();
	BFG9000(BFG9000 const &other);
	virtual ~BFG9000();
public:
	BFG9000	&operator=(BFG9000 const &other);

	void	attack(void) const;
};

#endif