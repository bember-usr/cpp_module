#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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
	ninja->beRepaired(1);
	ninja->beRepaired(50);
	ninja->ninjaShoebox(clap);
	ninja->ninjaShoebox(*frag);
	ninja->ninjaShoebox(*scav);
	ninja->ninjaShoebox(*ninja);
	ninja->ninjaShoebox(ninja_);
	std::cout <<
	"_____________________________________________"
		<<std::endl;
	SuperTrap *super = new SuperTrap("St3v3n");
	super->meleeAttack("BADASS ENEMY");
	super->rangedAttack("HANDSOME JACK");
	super->takeDamage(5);
	super->takeDamage(24);
	super->takeDamage(42);
	super->takeDamage(100);
	super->beRepaired(50);
	super->beRepaired(15);
	super->vaulthunter_dot_exe("VAULT KEEPER");
	super->vaulthunter_dot_exe("VAULT KEEPER");
	super->ninjaShoebox(clap);
	super->ninjaShoebox(*frag);
	super->ninjaShoebox(*scav);
	super->ninjaShoebox(*ninja);
	std::cout << "__________________DELETE" << std::endl;
	delete(super);
	std::cout <<
	"_____________________________________________"
		<<std::endl;
	delete(scav);
	delete(frag);
	delete(ninja);
	return (0);
}
