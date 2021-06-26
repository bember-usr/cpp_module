#include "Brain.hpp"

Brain::~Brain() {}

std::string Brain::identify() const
{
	std::cout << "5" << std::endl;
	(void)volume;
	std::ostringstream oss;
	oss << this;
	std::string res = oss.str();
	return (res);
}

Brain::Brain() {}

Brain::Brain(float _volume)
		:
		volume(_volume)
{
	std::cout << "1" << std::endl;
}