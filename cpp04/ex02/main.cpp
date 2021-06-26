#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete (vlc);
	
	std::cout << "________________NEW" << std::endl;

	bob = new TacticalMarine;
	jim = new AssaultTerminator;
	Squad vlc1 = Squad();
	vlc1.push(bob);
	vlc1.push(jim);

	ISpaceMarine* bob1 = new TacticalMarine;
	ISpaceMarine* bob2 = new TacticalMarine;
	ISpaceMarine* jim1 = new AssaultTerminator;
	ISpaceMarine* jim2 = new AssaultTerminator;
	Squad* vlc2 = new Squad;
	
	vlc2->push(bob1);
	vlc2->push(bob2);
	vlc2->push(jim2);
	vlc2->push(jim1);
	vlc2->push(jim1);
	std::cout << std::endl << "vlc1 and vlc2 are a squards of "
		<< vlc1.getCount() << " and " << vlc2->getCount() <<
		" mariners" << std::endl << std::endl;
	vlc1 = *vlc2;
	std::cout << std::endl << "vlc2 assigned to vlc1."<<
		"Now vlc1 is a squars of " <<
		vlc1.getCount() << " mariners" << std::endl;
	std::cout << std::endl;
	for(int i = 0; i < vlc1.getCount(); ++i)
	{
		ISpaceMarine *cur = vlc1.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl;
	*vlc2 = *vlc2;
	std::cout << std::endl;
	Squad vlc3(*vlc2);
	std::cout << std::endl << "vlc3 copyconstructor called with vlc2 as arg."<<
		"Now vlc3 is a squars of " <<
		vlc2->getCount() << " mariners" << std::endl;
	delete (vlc2);
	// system("leaks a.out");
	return 0;
}