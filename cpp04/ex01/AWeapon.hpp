#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon {//абстрактный класс
private:
	AWeapon();
	std::string name;
	int apcost;
	int damage;
public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(AWeapon const &other);
public:
	AWeapon				&operator=(AWeapon const &other);

	std::string const	&getName() const;
	int					getAPCost() const;
	int					getDamage() const;
	virtual void		attack() const = 0;//чисто виртуальная ф-ия
};

#endif