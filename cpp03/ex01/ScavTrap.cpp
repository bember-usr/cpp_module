#include "ScavTrap.hpp"

std::string const ScavTrap::type = "SC4V-TP";

ScavTrap::ScavTrap() {}

std::string const ScavTrap::challenges[ccount] = {
	"Stop before I kill again, exept don't!",
	"Get off my lawn!",
	"DO A TRIPLE BACKFLIP!",
	"Kill a badass enemy type.",
	"FACE THE SCARIEST OF YOUR FEARS! ME!"
};

ScavTrap::ScavTrap(std::string const &name)
		:
		_name(name)
{
	std::cout << type << " " << _name << ": Look out everybody! Things are about to get awesome!"
			  << std::endl;
	this->level = 1;
	this->hit_points = 100;
	this->energy_points = 100;
	this->max_hit_points = 100;
	this->max_energy_points = 100;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
}

ScavTrap::ScavTrap(ScavTrap const &other)
		:
		_name(other._name)
{
	*this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	//std::cout << "Assignation operator called" << std::endl;
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

ScavTrap::~ScavTrap()
{
	std::cout << type << " " << this->_name << ": My servos... are seizing.. death."
			  << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << type << " " << _name << " scavattacks " << target <<
		" at range, causing " << ranged_attack_damage <<
		" points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << type << " " << _name << " scavattacks " << target <<
		" at melee, causing " << melee_attack_damage <<
		" points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::challengeNewcomer()
{
	std::cout << type << " " << _name << " challenges a newcomer to \""
		<< challenges[std::rand() % ccount] << "\"" << std::endl;
}