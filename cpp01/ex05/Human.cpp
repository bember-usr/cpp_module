#include "Human.hpp"

Human::~Human() {}

std::string Human::identify()
{
	std::cout << "3" << std::endl;
/*Стандартная библиотека содержит 
незаслужено малоизвестный класс – ostringstream. 
Он предоставляет удобный интерфейс потоков ввода-вывода 
и прекрасно пережевывает все встроенные типы данных. 
Результирующую строку легко получить с помощью метода str();*/
	std::ostringstream oss;
	oss << &(this->brain);
	std::string res = oss.str();
	return (res);
}

const Brain& Human::getBrain()
{
	std::cout << "4" << std::endl;
	return brain;
}

Human::Human()
		:
		brain(0)
{
	std::cout << "2" << std::endl;
}