#ifndef ZOMBY_HPP
# define ZOMBY_HPP

#include <iostream>
#include <string>

class Zomby {
private:
	std::string _type;
	std::string _name;
public:
	Zomby(std::string name, std::string type);
	Zomby();
	~Zomby();
public:
	void	brains();
};

#endif