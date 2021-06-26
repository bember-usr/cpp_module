#ifndef PONY_HPP_
#define PONY_HPP_

#include <string>

class Pony {
private:
	std::string name;
public:
	Pony(std::string _name);
	~Pony();
public:
	void	PonyHello();
};

#endif