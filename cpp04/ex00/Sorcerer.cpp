#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
		:
		_name(name),
		_title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &other)
		:
		_name(other._name),
		_title(other._title)
{
	std::cout << this->_name << ", " << this->_title << ", is born ! COPY" << std::endl;
	*this = other;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &other)
{
	this->_name = other._name;
	this->_title = other._title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << _name <<", " << _title <<
		", is dead. Consequences will never be the same!"
		<< std::endl;
}

std::string Sorcerer::get_name() const
{
	return(this->_name);
}

std::string Sorcerer::get_title() const
{
	return(this->_title);
}

void Sorcerer::polymorph(Victim const &value) const
{
	value.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &value)
{
	out << "I am " << value.get_name() << ", " 
		<< value.get_title() << ", and I like ponies!" 
		<< std::endl;
	return (out);
}