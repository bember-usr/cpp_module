#include "FragTrap.hpp"

std::string const FragTrap::type = "FR4G-TP";

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
		_name(name)
{
	std::cout << type << " " << this->_name << ": Recompiling combat code!" << std::endl;
	this->level = 1;
	this->hit_points = 100;
	this->energy_points = 100;
	this->max_hit_points = 100;
	this->max_energy_points = 100;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
}

FragTrap::FragTrap(FragTrap const &other): _name(other._name)
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
	std::cout << type << " " << this->_name << ": Argh arghargh death gurgle gurglegurgle urgh... death."  << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << type << " " << _name << " attacks " << target <<
		" at range, causing " << ranged_attack_damage <<
		" points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << type << " " << _name << " attacks " << target <<
		" at melee, causing " << melee_attack_damage <<
		" points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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