#include "ScavTrap.hpp"

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
		ClapTrap(name)
{
	this->type = "SC4V-TP";
	this->level = 1;
	this->hit_points = 100;
	this->energy_points = 100;
	this->max_hit_points = 100;
	this->max_energy_points = 100;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
	std::cout << type << " " << _name << ": Look out everybody! Things are about to get awesome!"
			  << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
		:
		ClapTrap(other._name)
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
			  << " DESTROYED" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    std::cout << type << " " << _name << " challenges a newcomer to \""
        << challenges[std::rand() % ccount] << "\"" << std::endl;
}