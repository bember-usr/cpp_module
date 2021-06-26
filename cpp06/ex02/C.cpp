#include "C.hpp"

C::C() {}

C::C(C const & src)
{
	*this = src;
	return;
}

C::~C() {}

C	&C::operator=(C const & rhs)
{
	static_cast<void>(rhs);
	return (*this);
}
