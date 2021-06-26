#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const &name)
		:
		name(name),
		ap(40),
		weapon(nullptr) {}

Character::~Character() {}

Character::Character(Character const &other)
{
	*this = other;
}

Character &Character::operator=(Character const &other)
{
	this->name = other.name;
	this->ap = other.ap;
	this->weapon = other.weapon;
	return (*this);
}

void    Character::recoverAP(void)
{
	this->ap += 10;
	if (ap > 40)
		ap = 40;
}

void    Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

std::string const &Character::getName(void) const
{
	return (this->name);
}

int const &Character::getAP(void) const
{
	return (this->ap);
}

void    Character::attack(Enemy *enemy)
{
	if (this->weapon == nullptr || enemy == nullptr)
		return ;
	if (this->weapon->getAPCost() > this->ap)
	{
		std::cout << this->name << " has not enough AP to fire "
			<< this->weapon->getName() << " (has" << this->ap <<
			" < requireed " << this->weapon->getAPCost() << ")"
			<< std::endl;
		return ;
	}
	std::cout << this->name << " attks " << enemy->getType()
		<< " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	this->ap -= this->weapon->getAPCost();
	enemy->takeDamage(this->weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete (enemy);
}

bool Character::isArmed(void) const
{
	return (this->weapon != nullptr);
}

std::string const &Character::getWeaponName(void) const
{
	static const std::string empty = "";

	if (this->isArmed())
		return (this->weapon->getName());
	return (empty);
}

std::ostream &operator<<(std::ostream &out, Character const &value)
{
	out << value.getName() << " has " << value.getAP() <<
		" AP and ";
	if (value.isArmed())
		out << "wields a " << value.getWeaponName() << std::endl;
	else
		out << "is unarmed" << std::endl;
	return (out);
}