#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "BFG9000.hpp"
#include "DeathClaw.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "____________________ELSE" << std::endl;
	AWeapon *bfg = new BFG9000();
	Enemy *sm = new SuperMutant();

	me->attack(nullptr);
	me->equip(pf);
	std::cout << *me << sm->getType() <<
		" has " << sm->getHP() << " HP" <<
		std::endl;
	me->attack(sm);
	std::cout << *me << sm->getType() <<
		" has " << sm->getHP() << " HP" <<
		std::endl;
	me->equip(bfg);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "_________ELSE_________" << std::endl;
	Enemy *death = new DeathClaw();
	std::cout << *me << death->getType() <<
		" has " << death->getHP() << " HP"
		<< std::endl;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->attack(death);
	std::cout << *me;
	return 0;
}