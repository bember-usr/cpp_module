#include "AWeapon.hpp"

AWeapon::AWeapon() {}
AWeapon::~AWeapon() {}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
		:
		name(name),
		apcost(apcost),
		damage(damage) {}

AWeapon::AWeapon(AWeapon const &other)
{
	*this = other;
}

AWeapon &AWeapon::operator=(AWeapon const &other)
{
	this->apcost = other.apcost;
	this->damage = other.damage;
	this->name = other.name;
	return (*this);
}

std::string const &AWeapon::getName(void) const
{
	return (this->name);
}

int	AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

int	AWeapon::getDamage(void) const
{
	return (this->damage);
}