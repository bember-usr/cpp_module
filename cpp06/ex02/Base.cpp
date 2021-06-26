#include "Base.hpp"

Base::Base() {}

Base::Base(Base const & src)
{
	*this = src;
	return ;
}

Base::~Base() {}

Base	&Base::operator=(Base const & rhs)
{
	static_cast<void>(rhs);
	return (*this);
}
