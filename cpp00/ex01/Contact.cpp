#include "Contact.hpp"

Contact::Contact()
{
	c_fields[0] = "first name";
	c_fields[1] = "last name";
	c_fields[2] = "nickname";
	c_fields[3] = "login";
	c_fields[4] = "postal address";
	c_fields[5] = "email address";
	c_fields[6] = "phone number";
	c_fields[7] = "birthday date";
	c_fields[8] = "favorite meal";
	c_fields[9] = "underwear color";
	c_fields[10] = "darkest secret";
}

std::string Contact::getfirst(void)
{
	return (this->data[0]);
}

std::string Contact::getlast(void)
{
	return (this->data[1]);
}

std::string Contact::getnick(void)
{
	return (this->data[2]);
}

bool Contact::getinfo(void)
{
	int i;

	i = -1;
	while (++i < 11)
	{
		std::cout << "Enter " << c_fields[i] << ": ";
		std::getline(std::cin, data[i]);
	}
	i = -1;
	while (++i < 11)
		if (!data[i].empty())
			return (true);
	return (false);
}

void Contact::printinfo(void)
{
	int i;

	i = - 1;
	while (++i < 11)
		std::cout << std::setw(17) << c_fields[i] << ": " << data[i] << std::endl;
}