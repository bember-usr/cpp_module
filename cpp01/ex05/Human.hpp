#ifndef HUMAN_HPP_
#define HUMAN_HPP_

#include "Brain.hpp"

class Human {
private:
	const Brain brain;
public:
	Human();
	~Human();
public:
	const Brain		&getBrain();
	std::string		identify();
};

#endif