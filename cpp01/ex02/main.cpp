#include <iostream>
#include <time.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main ()
{
	std::srand(time(nullptr));
	Zombie just_zombie("Diana", "simple");
	just_zombie.announce();

	Zombie *new_zombie;
	ZombieEvent event;
	event.setZombieType("event");
	new_zombie = event.newZombie("Heeeeeap");
	new_zombie->announce();
	delete new_zombie;

	event.randomChump();
	return 0;
} 