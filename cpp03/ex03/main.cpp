#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	srand(std::time(nullptr));

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
	std::cout <<
		"_____________________________________________"
			<<std::endl;
	ClapTrap clap("Charles");
	NinjaTrap ninja_("Sai");
	NinjaTrap *ninja = new NinjaTrap("Lie");
	ninja->meleeAttack("Badass Enemy");
	ninja->rangedAttack("Handsome Jack");
	ninja->takeDamage(5);
	ninja->takeDamage(24);
	ninja->takeDamage(42);
	ninja->takeDamage(100);
	ninja->beRepaired(30);
	ninja->beRepaired(15);
	ninja->beRepaired(125);
	ninja->beRepaired(1);
	ninja->beRepaired(50);
	ninja->ninjaShoebox(clap);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*ninja);
	ninja->takeDamage(42);
	ninja->ninjaShoebox(ninja_);
	std::cout <<
	"_____________________________________________DELETE"
		<<std::endl;
	delete(scav);
	delete(frag);
	delete(ninja);
	return (0);
}
