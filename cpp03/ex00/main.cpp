#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("Micky");

	srand(std::time(nullptr));
	frag.meleeAttack("BADASS ENEMY");
	frag.rangedAttack("HANDSOME JACK");
	frag.takeDamage(5);
	frag.takeDamage(24);
	frag.takeDamage(42);
	frag.takeDamage(100);
	frag.beRepaired(50);
	frag.beRepaired(15);
	frag.beRepaired(125);
	frag.beRepaired(125);
	frag.takeDamage(42);
	frag.vaulthunter_dot_exe("VAULT KEEPER");
	frag.vaulthunter_dot_exe("VAULT KEEPER");
	frag.vaulthunter_dot_exe("VAULT KEEPER");
	frag.vaulthunter_dot_exe("VAULT KEEPER");
	frag.beRepaired(50);
	frag.vaulthunter_dot_exe("VAULT KEEPER");
	return (0);
}
