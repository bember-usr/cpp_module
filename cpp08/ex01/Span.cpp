#include "Span.hpp"

Span::Span()
		:
		_size(0) {}

Span::Span(unsigned int size)
		:
		_size(size)
{
	_numVec.reserve(_size);
}

Span::Span(Span const &other)
{
	*this = other;
}

Span::~Span()
{
	this->_numVec.clear();
}

const char* Span::FullSpanException::what() const throw()
{
	return "SpanException: Span is already full";
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return "SpanException: not enough numbers in Span";
}

Span &Span::operator=(Span const &other)
{
	if (this == &other)
		return (*this);
	this->_size = other._size;
	this->_numVec.clear();
	this->_numVec = other._numVec;
	return (*this);
}

void Span::addNumber(int value)
{
	if (this->_numVec.size() == this->_size)
		throw Span::FullSpanException();
	this->_numVec.push_back(value);
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	while (start != end)
	{
		this->addNumber(*start);
		start++;
	}
}

unsigned int Span::shortestSpan() const // короткий промежуток
{
	unsigned int size = this->_numVec.size();
	if (size <= 1)
		throw Span::NotEnoughNumbersException();

	std::vector<unsigned int> copyVec(_numVec);
	std::sort(copyVec.begin(), copyVec.end());
	// std::vector<unsigned int>::iterator tr = copyVec.begin();
	// std::cout << "Sotr vector:" << std::endl;
	// while (tr + 1 != copyVec.end())
	// {
	// 	std::cout << *tr << "\t";
	// 	tr++;
	// }
	// std::cout << *tr << "\t";
	// std::cout << std::endl;
	std::vector<unsigned int> _tmp;
	std::vector<unsigned int>::iterator ctr = copyVec.begin();
	// std::cout << "Shortest Span:" << std::endl;
	while (ctr + 1 != copyVec.end())
	{
		// std::cout << *(ctr + 1) - *ctr << "\t";
		_tmp.push_back(*(ctr + 1) - *ctr);
		ctr++;
	}
	// std::cout << std::endl;
	return (*std::min_element(_tmp.begin(), _tmp.end()));
	// return (*std::min_element(_numVec.begin(), _numVec.end()));

}

unsigned int Span::longestSpan(void) const
{
	if (this->_numVec.size() <= 1)
		throw Span::NotEnoughNumbersException();

	int biggest = *std::max_element(this->_numVec.begin(), this->_numVec.end());
	int smallest = *std::min_element(this->_numVec.begin(), this->_numVec.end());
	return (std::abs(biggest - smallest));
}