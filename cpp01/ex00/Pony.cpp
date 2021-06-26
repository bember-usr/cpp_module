#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name)
		:
		name(name) 
{
	std::cout << "Pony " << _name <<  " was created" << std::endl;
}

void Pony::PonyHello() 
{
	std::cout << "Hello from Pony with name " << name << std::endl;
}

Pony::~Pony() 
{
	std::cout << "Pony was " << name << " destructed" << std::endl;
}