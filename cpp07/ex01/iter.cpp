#include <iostream>
#include <cctype>

template<typename T>
void iter(T *arr, size_t length, void (*f)(T const &elt))
{
	for (size_t i = 0; i < length; i++)
		(*f)(arr[i]);
}

template<typename T>
void display(T const &value)
{
	std::cout << value << " ";
}

int main(void)
{
	int intR[5] = { 0, 1, 2, 3, 4 };
	iter(intR, 5, &display); std::cout << std::endl;

	float floatR[5] = { 0.0f, 2.2f, 4.4f, 3.3f, 10.1f };
	iter(floatR, 5, &display); std::cout << std::endl;

	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, 5, &display); std::cout << std::endl;

	bool boolR[2] = { false, true };
	iter(boolR, 2, &display); std::cout << std::endl;

	std::string stringR[5] = { "phrase 1", "phrase 2", "templates", "are", "fun" };
	iter(stringR, 5, &display); std::cout << std::endl;
	iter(stringR, 2, &display); std::cout << std::endl;
	iter(stringR, 0, &display); std::cout << std::endl;

	return (0);
}