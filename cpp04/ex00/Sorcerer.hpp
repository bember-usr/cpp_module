#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer {
private:
	Sorcerer();
	std::string _name;
	std::string _title;
public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const &other);
	virtual ~Sorcerer();
public:
	Sorcerer	&operator=(Sorcerer const &other);

	std::string	get_name() const;
	std::string	get_title() const;
	void		polymorph(Victim const &) const; 

};

std::ostream &operator<<(std::ostream &out, Sorcerer const &value);

#endif
