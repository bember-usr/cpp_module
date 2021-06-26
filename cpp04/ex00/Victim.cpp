#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string const &name)
		:
		_name(name)
{
	std::cout << "Some random victim called " << this->_name 
		<< " just appeared!" << std::endl;
}

Victim::Victim(Victim const &other)
		:
		_name(other._name)
{
	std::cout << "Some random victim called " 
		<< this->_name << " just popped"
		<< std::endl;
	*this = other;
}

Victim &Victim::operator=(Victim const &other)
{
	this->_name = other._name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << 
		" just died for no apparent reason!"
		<< std::endl;
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << 
		" has been turned into a cute little sheep!"
		<< std::endl;
}

std::string Victim::get_name() const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &out, Victim const &value)
{
	out << "I'm " << value.get_name()
		<< " and I like otters!" << std::endl;
	return (out);
}