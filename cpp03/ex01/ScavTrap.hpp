#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
private:
	std::string _name;
	unsigned int level;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int max_hit_points;
	unsigned int max_energy_points;
	unsigned int melee_attack_damage;
	unsigned int ranged_attack_damage;
	unsigned int armor_damage_reduction;
	static const std::string type;
	static const unsigned int ccount = 5;
	static const std::string challenges[ccount];
	ScavTrap();
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);
	~ScavTrap();
public:
	ScavTrap	&operator=(ScavTrap const &other);

	void		challengeNewcomer();
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif