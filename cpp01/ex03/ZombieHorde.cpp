#include "ZombieHorde.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

ZombyHorde::ZombyHorde() {}

ZombieHorde::ZombieHorde(int nbr)
{
	zombies = new Zombie[nbr];
	zombie_count = nbr;
	std::string names[6] = {"Sai", "Ino", "Naruto", "Sakura", "Lie", "Minato"};
	for (unsigned int i = 0; i < zombie_count; i++)
	{
		zombies[i].setName(names[std::rand() % 5]);
		zombies[i].setType("random");
	}
}

void ZombieHorde::brain()
{
	for (unsigned int i = 0; i < zombie_count; i++)
		zombies[i].brains();
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombies;
	std::cout << "Zombies was free" << std::endl;
}