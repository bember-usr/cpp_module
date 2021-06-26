#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>

class ClapTrap {
protected:
	std::string		_name;
	std::string		type;
	unsigned int	level;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	max_hit_points;
	unsigned int	max_energy_points;
	unsigned int	melee_attack_damage;
	unsigned int	ranged_attack_damage;
	unsigned int	armor_damage_reduction;
	ClapTrap();
public:
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &other);
	virtual ~ClapTrap();
public:
	ClapTrap &operator=(ClapTrap const &other);

	std::string		get_name();
	virtual void	meleeAttack(std::string	const &target);
	virtual	void	rangedAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif