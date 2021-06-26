#include "Peon.hpp"

Peon::Peon()
		:
		Victim() {}

Peon::Peon(std::string const &name)
		:
		Victim(name)
{
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon(Peon const &other)
		:
		Victim(other._name)
{
	std::cout << "Zog zog" << std::endl;
	*this = other;
}

Peon &Peon::operator=(Peon const &other)
{
	this->_name = other._name;
	return (*this);
}

Peon::~Peon()
{
	std::cout <<  "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name <<" has been turned into a pink pony!" << std::endl;
}

std::string Peon::get_name() const
{
	return (this->_name);
} 

std::ostream &operator<<(std::ostream &out, Peon const &value)
{
	out << "I'm " << value.get_name()
		<< " and I like otters!" << std::endl;
	return (out);
}