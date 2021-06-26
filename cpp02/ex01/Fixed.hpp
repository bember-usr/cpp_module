#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
private:
	int rawvalue;
	static const int fractional_bit = 8;
public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed(int const value);
	Fixed(float const value);
	~Fixed();
public:
	int		getRawBits() const;
	void	setRawBits(int const raw);
	Fixed	&operator=(Fixed const &other);
	float	toFloat() const;
	int		toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif