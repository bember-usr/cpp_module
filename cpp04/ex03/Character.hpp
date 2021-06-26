#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter {
private:
	std::string name;
	int equipped;
	AMateria *inventory[4];
	Character();
public:
	Character(std::string const &name);
	Character(Character const &other);
	virtual ~Character();
public:
	Character			&operator=(Character const &other);

	std::string const	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};

#endif