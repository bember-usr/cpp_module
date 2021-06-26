#ifndef A_HPP
# define A_HPP
#include "Base.hpp"

class	A: public Base {
public:
	A();
	A(A const & src);
	virtual ~A(void);
public:
	A	&operator=(A const & rhs);
};

#endif
