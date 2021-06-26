#include "A.hpp"

A::A() {}

A::A(A const & src)
{
	*this = src;
	return ;
}

A::~A() {}

A	&A::operator=(A const & rhs)
{
	static_cast<void>(rhs);
	return (*this);
}
