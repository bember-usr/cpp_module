#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria {
private:
	AMateria();
	unsigned int _xp;
	std::string type;
public:
	AMateria(std::string const &type);
	AMateria(AMateria const &other);
	virtual ~AMateria();
public:
	AMateria			&operator=(AMateria const &other);

	std::string const	&getType() const;	// Returns the materia type
	unsigned int		getXP() const;		// Returns the Materia's XP
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif