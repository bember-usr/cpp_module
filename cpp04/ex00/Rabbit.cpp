#include "Rabbit.hpp"

Rabbit::Rabbit()
		:
		Victim("rabbit") {}

Rabbit::~Rabbit()
{
	std::cout << "Bye 1_1" << std::endl;
}

Rabbit::Rabbit(std::string const &name)
		:
		Victim(name)
{
	std::cout << "Hello 1_1 \tI'm here! 1_1" << std::endl;
}

Rabbit::Rabbit(Rabbit const &other): Victim(other._name)
{
	*this = other;
}

Rabbit &Rabbit::operator=(Rabbit const &other)
{
	std::cout << this->_name << " was assigned" << std::endl;
	this->_name = other._name;
	return (*this);
}

void Rabbit::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a polar bear!"
		<< std::endl;
}

