#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>

class FragTrap {
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
	static const int nbrQuotes = 8;
	static const std::string quotes[nbrQuotes];
	FragTrap();
public:
	~FragTrap();
	FragTrap(FragTrap const &other);
	FragTrap(std::string const &name);
public:
	FragTrap &operator=(FragTrap const &other);

	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	vaulthunter_dot_exe(std::string const &target);
};

#endif