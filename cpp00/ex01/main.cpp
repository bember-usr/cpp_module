#include "Phonebook.hpp"

static void	title(void)
{
	std::cout << std::endl;
	std::cout << "\x1b[34m";
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << "\x1b[0m" << std::endl;
	std::cout << "Welcome to your phonebook !\nThe available entries are : " << std::endl;
	std::cout << "\x1b[34m - ADD \n - SEARCH \n - EXIT" "\x1b[0m"<< std::endl;
}

int main(void)
{
	title();
	Phonebook phnb;
	std::string cmd;
	bool status;
	
	status = true;
	while (status)
	{
		if (std::cin.eof())
			break ;
        std::cout << std::endl << "Enter command: ";
		std::getline(std::cin, cmd);
		std::cout << std::endl;
		
		if (cmd.compare("ADD") == 0)
			phnb.add();
		else if (cmd.compare("SEARCH") == 0)
			phnb.search();
		else if (cmd.compare("EXIT") == 0)
		{
			std::cout << "\x1b[32m Bye bye!" "\x1b[0m" << std::endl;
			status = false;
		}
        else
			std::cout << "\x1b[31m ERROR: Command not found" "\x1b[0m" <<std::endl;
	}
	return (0);
}