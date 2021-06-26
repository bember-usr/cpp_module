#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base* base;// = new Base();
	int n = rand() % 3;

	if (n == 0)
		base = new A();
	if (n == 1)
		base = new B();
	if (n == 2)
		base = new C();
	return base;
}

void identify_from_pointer( Base * p )
{
	A* baseA;
	B* baseB;
	C* baseC;

	baseA = dynamic_cast<A *>(p);
	baseB = dynamic_cast<B *>(p);
	baseC = dynamic_cast<C *>(p);
	if (baseA == nullptr && baseB == nullptr)
		std::cout << "C" << std::endl;
	if (baseA == nullptr && baseC == nullptr)
		std::cout << "B" << std::endl;
	if (baseB == nullptr && baseC == nullptr)
		std::cout << "A" << std::endl;
	return ;
}

void identify_from_reference( Base & p )
{
	A* baseA;
	B* baseB;
	C* baseC;

	baseA = dynamic_cast<A *>(&p);
	baseB = dynamic_cast<B *>(&p);
	baseC = dynamic_cast<C *>(&p);
	if (baseA == nullptr && baseB == nullptr)
		std::cout << "C" << std::endl;
	if (baseA == nullptr && baseC == nullptr)
		std::cout << "B" << std::endl;
	if (baseB == nullptr && baseC == nullptr)
		std::cout << "A" << std::endl;
	return ;
}

int		main()
{
	std::srand(std::time(nullptr));
	Base *base;

	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	return (0);
}
