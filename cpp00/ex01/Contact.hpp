#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
private:
	std::string c_fields[11];
	std::string data[11];
public:
	Contact(){}
	~Contact(){}
public:
	std::string	getfirst();
	std::string getlast();
	std::string getnick();
	bool		getinfo();
	void		printinfo();
};

#endif