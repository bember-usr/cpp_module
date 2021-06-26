#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int rawvalue;
	static const int fractional_bit = 8;
public:
	Fixed();
	Fixed(Fixed const &other);
	~Fixed();
public:
	Fixed	&operator=(Fixed const &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif