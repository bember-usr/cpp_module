#include "FragTrap.hpp"

FragTrap::FragTrap() {}

std::string const FragTrap::quotes[nbrQuotes] = {
	"Take that!",
	"Get off my lawn!",
	"Lightening! Kukachow!",
	"I am Fire, I am Death!",
	"Coffee? Black... like my soul.",
	"Hehehehe, mwaa ha ha ha, MWAA HA HA HA!",
	"Ha ha ha! Fall before your robot overlord!",
	"I am tornado of death and bullets!"
};

FragTrap::FragTrap(std::string const &name)
		:
		ClapTrap(name)
{
	this->type = "FR4G-TP";
	this->level = 1;
	this->hit_points = 100;
	this->energy_points = 100;
	this->max_hit_points = 100;
	this->max_energy_points = 100;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
	std::cout << type << " " << this->_name << ": Recompiling combat code!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
		:
		ClapTrap(other._name)
{
	*this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
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

FragTrap::~FragTrap()
{
	std::cout << type << " " << this->_name << ": Argh arghargh death gurgle gurglegurgle urgh... FRAG dies."  << " DESTROYED" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (energy_points < 25)
		std::cout  << type << " " << _name << " is out of energy!" << std::endl;
	else
	{
		energy_points -= 25;
		std::cout << type << " " << _name << " screams \"" <<
			quotes[std::rand() % nbrQuotes] << "\"" <<
			" and attacks " << target << " for " <<
			(std::rand() % ranged_attack_damage + melee_attack_damage) <<
			" damage" << std::endl;
	}
}