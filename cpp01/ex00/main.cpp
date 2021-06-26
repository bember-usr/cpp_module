#include <iostream>
#include "Pony.hpp"

//clang++ -Wall -Wextra -Werror
//system("leaks a.out"); in main

void ponyOnTheHeap(void)
{
	Pony *ponyHeap = new Pony("HeapPony");
	
	ponyHeap->PonyHello();
	delete ponyHeap; // ~
	std::cout << "End of ponyOnTheHeap func" << std::endl;
}

void ponyOnTheStack(void)
{
	Pony ponyStack("StackPony");

	ponyStack.PonyHello();
	std::cout << "End of ponyOnTheStack func" << std::endl;
} // ~

int main(void)
{
	std::srand(std::time(nullptr));
	ponyOnTheHeap();
	std::cout << "__________________________" << std::endl;
	ponyOnTheStack();
	return (0);
}