#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim {
private:
	Peon();
public:
	Peon(std::string const &name);
	Peon(Peon const &other);
	virtual ~Peon();
public:
	Peon		&operator=(Peon const &other);

	void		getPolymorphed() const;
	std::string	get_name() const;

};

std::ostream &operator<<(std::ostream &out, Peon const &value);

#endif