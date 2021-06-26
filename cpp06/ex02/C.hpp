#ifndef C_HPP
# define C_HPP
#include "Base.hpp"

class	C: public Base {
public:
	C();
	C(C const & src);
	virtual ~C(void);
public:
	C	&operator=(C const & rhs);
};

#endif
