#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
		:
		ClapTrap(),
		FragTrap(),
		NinjaTrap() {}

SuperTrap::~SuperTrap()
{
	std::cout << type << " " << _name <<
		" says: \"The robot is dead, long live the robot!\" SUPER died"
		<< " DESTROYED" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other)
		:
		ClapTrap(other._name),
		FragTrap(other._name),
		NinjaTrap(other._name)
{
	*this = other;
}

SuperTrap::SuperTrap(std::string const &name)
		:
		ClapTrap(name),
		FragTrap(name),
		NinjaTrap(name)
{
	type = "SUP3R-TP";
	this->level = 1;
	this->hit_points = 100;				//FragTrap::hp
	this->energy_points = 120;			//NinjaTrap
	this->max_hit_points = 100;			//FragaTrap
	this->max_energy_points = 120;		//NinjaTrap
	this->melee_attack_damage = 60;		//NinjaTrap
	this->ranged_attack_damage = 20;	//FragTrap
	this->armor_damage_reduction = 5;	//FragTrap
	std::cout << type << " " << this->_name << "says: \"Shouldn't you be mutdering something about now?\"!"
			  << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &other)
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

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}