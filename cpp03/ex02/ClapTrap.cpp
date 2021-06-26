#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << _name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name)
		:
		_name(name)
{
	this->level = 0;
	this->hit_points = 0;
	this->energy_points = 0;
	this->max_hit_points = 0;
	this->max_energy_points = 0;
	this->melee_attack_damage = 0;
	this->ranged_attack_damage = 0;
	this->armor_damage_reduction = 0;
	std::cout << "CL4P-TP " << this->_name << ": successful build!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	this->_name = other._name;
	this->level = other.level;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->max_hit_points = other.max_hit_points;
	this->max_energy_points = other.max_energy_points;
	this->melee_attack_damage = other.melee_attack_damage;
	this->ranged_attack_damage = other.ranged_attack_damage;
	this->armor_damage_reduction = other.armor_damage_reduction;
	return (*this);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points == 0)
	{
		std::cout << type << " " << _name << " already destroyed." << std::endl;
		return ;
	}
	if (amount < armor_damage_reduction)
		amount = 0;
	else
		amount -= armor_damage_reduction;
	if (hit_points < amount)
		amount = hit_points;
	hit_points -= amount;
	std::cout << type << " " << _name << " take "
			<< amount << " points of damage!" << std::endl;
	if (hit_points == 0)
		std::cout << type << " " << _name << " has been destroyed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points == max_hit_points)
	{
		std::cout << type << " " << _name 
			<< " is already at max hp!" << std::endl;
		return ;
	}
	if (amount >= max_hit_points || hit_points + amount > max_hit_points)
		amount = max_hit_points - hit_points;
	hit_points += amount;
	std::cout << type << " " << _name << " repaired for " << amount <<
		" health points!" << std::endl;
	if (hit_points == max_hit_points)
		std::cout << type << " " << _name << " is at max hp!" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << type << " " << _name << " Clapattacks " << target <<
		" at range, causing " << ranged_attack_damage <<
		" points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << type << " " << _name << " Clapattacks " << target <<
		" at melee, causing " << melee_attack_damage <<
		" points of damage!" << std::endl;
}