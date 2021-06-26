#include "easyfind.hpp"

int main(void)
{
	std::vector<int> a;
	a.push_back(1);
	a.push_back(3);
	a.push_back(45);
	a.push_back(34);
	a.push_back(78);
	a.push_back(6);
	std::vector<int>::iterator var;
	std::cout << "\033[32mValid test: find '3'\033[0m" << std::endl;
	try
	{
		var = easyfind(a, 3);
		std::cout << "Detected element is " << *var << ", pos : " << var - a.begin() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[32mValid test: find '78'\033[0m" << std::endl;
	try
	{
		var = easyfind(a, 78);
		std::cout << "Detected element is " << *var << ", pos : " << var - a.begin() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[31mNot Valid test: find '-1'\033[0m" << std::endl;
	try
	{
		var = easyfind(a, -1);
		std::cout << "Detected element is" << *var << ", pos : " << var - a.begin() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}