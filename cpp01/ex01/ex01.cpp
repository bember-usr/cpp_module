#include <iostream>
#include <string>

//clang++ -Wall -Wextra -Werror
//system("leaks a.out"); in main before return()

void memoryLeak()
{
	std::string* panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete(panther);
}

int main(void)
{
	memoryLeak();
	return (0);
}
