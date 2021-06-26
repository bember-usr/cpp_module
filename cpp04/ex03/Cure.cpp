#include "Cure.hpp"

Cure::Cure()
		:
		AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(Cure const &other)
		:
		AMateria(other)
{
	*this = other;
}

Cure &Cure::operator=(Cure const &other)
{
	AMateria::operator=(other);
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria *dup = new Cure(*this);
	return (dup);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;
}