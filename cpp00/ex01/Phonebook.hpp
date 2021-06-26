#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook {
private:
	int cont_nbr;
	Contact contact[8];
	std::string fieldformat(std::string field);
public:
	Phonebook();
	~Phonebook();
public:
	void add();
	void search();
};

#endif
