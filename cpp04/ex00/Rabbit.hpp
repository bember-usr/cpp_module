#ifndef RABBIT_HPP
# define RABBIT_HPP

#include "Victim.hpp"

class Rabbit: public Victim {
private:
	Rabbit();
public:
	Rabbit(std::string const &name);
	Rabbit(Rabbit const &other);
	virtual ~Rabbit();
public:
	Rabbit	&operator=(Rabbit const &other);

	void	getPolymorphed() const;
};

#endif