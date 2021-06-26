#include <cstdlib>
#include "Phonebook.hpp"

Phonebook::Phonebook()
		:
		cont_nbr(0) {}

Phonebook::~Phonebook() {}

std::string fieldformat(std::string field)
	{
		if (field.length() > 10)
		field = field.substr(0, 9) + ".";
		return (field);
	}

void Phonebook::add(void)
{
	if (cont_nbr >= 8)
	{
		std::cout << "\x1b[31m ERROR: More than 8 contacts." "\x1b[0m" << std::endl;
		return ; 
	}
	if (!contact[cont_nbr].getinfo())
		std::cout << std::endl << "\x1b[31m ERROR: Empty contact." "\x1b[0m" << std::endl << std::endl;
	else
		cont_nbr++;
}

void Phonebook::search(void)
{
	int	i;
	std::string cont_index;

	if (cont_nbr > 8)
	{
		std::cout << "\x1b[31m ERROR: No contacts to search." "\x1b[0m" << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (i = 0; i < cont_nbr; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << fieldformat(contact[i].getfirst()) << "|";
		std::cout << std::setw(10) << fieldformat(contact[i].getlast()) << "|";
		std::cout << std::setw(10) << fieldformat(contact[i].getnick()) << "|";
		std::cout << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "Enter index for " << 1 << " to " << cont_nbr << ": ";
	std::getline(std::cin, cont_index);
	//find_first_not_of - поиск первого символа, который не представлен в строке
	//npos - если не находит данную строку (-1 (знаковое представление))
	//c_str возвращает const char* , который указывает на строку с окончанием nullptr
	if ((cont_index.find_first_not_of(" 0123456789") != std::string::npos) ||
		((i = std::atoi(cont_index.c_str()) - 1) && (i < 0 || i >= cont_nbr)))
	{
		std::cout << "\x1b[31m ERROR: Bad index." "\x1b[0m" << std::endl;
		return ;
	}
	contact[i].printinfo();
}