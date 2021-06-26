#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
#include <string>
#include <sstream>

class Brain {
private:
	float volume;
	Brain();
public:
	~Brain();
	Brain(float _volume);
public:
	std::string	identify() const;
};

#endif