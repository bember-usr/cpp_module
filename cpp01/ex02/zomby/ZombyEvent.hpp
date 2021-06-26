#ifndef ZOMBYEVENT_HPP
# define ZOMBYEVENT_HPP

# include "Zomby.hpp"

class ZombyEvent {
private:
	std::string type;
public:
	ZombyEvent();
	~ZombyEvent();
public:
	void	setZombyType(std::string name);
	Zomby	*newZomby(std::string name);
	void	randomChump();
};

#endif