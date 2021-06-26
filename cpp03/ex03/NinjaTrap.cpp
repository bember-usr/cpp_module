#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {}

NinjaTrap::NinjaTrap(std::string const &name)
		:
		ClapTrap(name)
{
	type = "NINJ4-TP";
	this->level = 1;
	this->hit_points = 60;
	this->energy_points = 120;
	this->max_hit_points = 60;
	this->max_energy_points = 120;
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
	std::cout << type << " " << this->_name << "says: \"It's time to phasw you suckers out\"!"
			  << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << type << " " << _name <<
		" says: \"Metal gears... frozen solid!\" died."
		<< std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other)
		:
		ClapTrap(other._name)
{
	;*this = other;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &other)
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

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	if (this->energy_points < 15)
	{
		std::cout<<"There is not enough energy."<<std::endl;
		return ;
	}
	this->energy_points -= 15;
	std::cout << "NinjaShoeBox! parameter FragTrap!" << std::endl;
	trap.vaulthunter_dot_exe("ShoeBox target!");
	std::cout << "Ninja Trap " << this->_name << " The remaining energy is " << this->energy_points << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	if (this->energy_points < 15)
	{
		std::cout<<"There is not enough energy."<<std::endl;
		return ;
	}
	this->energy_points -= 15;
	std::cout << "NinjaShoeBox! parameter ClapTrap!" << trap.get_name() <<std::endl;
	std::cout << "There is no special function of ClapTrap! Don't know that?" << std::endl;
	std::cout << "Ninja Trap " << this->_name << " The remaining energy is " << this->energy_points << std::endl;
}
void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	if (this->energy_points < 15)
	{
		std::cout<<"There is not enough energy."<<std::endl;
		return ;
	}
	this->energy_points -= 15;
	std::cout << "NinjaShoeBox! parameter NinjaTrap!" << trap.getname() <<std::endl;
	std::cout << "ShoeBox is already running! idiot" << std::endl;
	std::cout << "Ninja Trap " << this->_name << " The remaining energy is " << this->energy_points << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	if (this->energy_points < 15)
	{
		std::cout<<"There is not enough energy."<<std::endl;
		return ;
	}
	this->energy_points -= 15;
	std::cout << "NinjaShoeBox! parameter ScavTrap!" << std::endl;
	trap.challengeNewcomer();
	std::cout << "Ninja Trap " << this->_name << " The remaining energy is " << this->energy_points << std::endl;
}

std::string NinjaTrap::getname()
{
	return (this->_name);
}