#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(std::time(nulptr));

	FragTrap *frag = new FragTrap("Micky");
	frag->meleeAttack("BADASS ENEMY");
	frag->rangedAttack("HANDSOME JACK");
	frag->takeDamage(5);
	frag->takeDamage(24);
	frag->takeDamage(42);
	frag->takeDamage(100);
	frag->beRepaired(50);
	frag->beRepaired(15);
	frag->beRepaired(125);
	frag->beRepaired(125);
	frag->takeDamage(42);
	frag->beRepaired(50);
	frag->vaulthunter_dot_exe("VAULT KEEPER");
	frag->vaulthunter_dot_exe("VAULT KEEPER");
	frag->vaulthunter_dot_exe("VAULT KEEPER");
	frag->vaulthunter_dot_exe("VAULT KEEPER");
	frag->vaulthunter_dot_exe("VAULT KEEPER");
	delete(frag);
	std::cout <<
		"_____________________________________________"
			<<std::endl;
	ScavTrap *scav = new ScavTrap("Nick");
	scav->meleeAttack("Badass Enemy");
	scav->rangedAttack("Handsome Jack");
	scav->takeDamage(5);
	scav->takeDamage(24);
	scav->takeDamage(42);
	scav->takeDamage(100);
	scav->beRepaired(30);
	scav->beRepaired(15);
	scav->beRepaired(125);
	scav->beRepaired(1);
	scav->beRepaired(50);
	scav->challengeNewcomer();
	scav->challengeNewcomer();
	scav->challengeNewcomer();
	scav->challengeNewcomer();
	scav->takeDamage(42);
	scav->challengeNewcomer();
	delete(scav);
	return (0);
}
