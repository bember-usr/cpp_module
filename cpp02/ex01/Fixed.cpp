#include "Fixed.hpp"

Fixed::Fixed()
		:
		rawvalue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawvalue = value * (1 << fractional_bit);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawvalue = int(roundf(value * ( 1 << fractional_bit)));
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawvalue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->rawvalue = raw;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->rawvalue = other.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &other)
{
	out << other.toFloat();
	return (out);
}

float Fixed::toFloat() const
{
	return ((float)rawvalue / (float)(1 << fractional_bit));
}

int Fixed::toInt() const
{
	int ret = rawvalue / (1 << fractional_bit);
	return (ret);
}
