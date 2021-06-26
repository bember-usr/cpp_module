#include "ZombyEvent.hpp"

ZombyEvent::ZombyEvent()
{
	type = "none";
	std::cout << "ZombyEvent was constructed" << std::endl;
}

void ZombyEvent::setZombyType(std::string name)
{
	type = name;
}

Zomby* ZombyEvent::newZomby(std::string name)
{
	Zomby *new_Z = new Zomby(name, type);
	return (new_Z);
}

void ZombyEvent::randomChump()
{
	std::string names[6] = {"Sasori", "Kakuzu", "Pain", "Itachi", "Tobi", "Deidara"};
	Zomby zomby = Zomby(names[std::rand() % 6], type);
	zomby.brains();
}

ZombyEvent::~ZombyEvent()
{
	std::cout << "ZombieEvent was distracted" << std::endl;
}