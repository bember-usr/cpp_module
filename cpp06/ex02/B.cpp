#include "B.hpp"

B::B() {}

B::B(B const & src)
{
	*this = src;
	return ;
}

B::~B() {}

B	&B::operator=(B const & rhs)
{
	static_cast<void>(rhs);
	return (*this);
}
