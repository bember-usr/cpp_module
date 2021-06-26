#include "Zomby.hpp"
#include "ZombyEvent.hpp"
#include <time.h>

int main(void)
{
	std::srand(time(nullptr));
	Zomby new_zomb("Diana", "simple");
	new_zomb.brains();

	Zomby *new_zombie;
	ZombyEvent event;

	event.setZombyType("event");
	new_zombie = event.newZomby("Heeeeeap");
	new_zombie->brains();
	delete new_zombie;

	event.randomChump();
}