#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {
private:
	std::string name;
	int			ap;
	AWeapon		*weapon;
	Character();
public:
	Character(std::string const & name);
	Character(Character const &other);
	virtual ~Character();
public:
	Character			&operator=(Character const &other);

	void				recoverAP();
	void				equip(AWeapon *weapon);
	void				attack(Enemy *enemy);
	std::string const	&getName() const;
	int	const			&getAP() const;
	bool				isArmed() const;
	std::string const	&getWeaponName() const;
};

std::ostream &operator<<(std::ostream &out, Character const &value);

#endif