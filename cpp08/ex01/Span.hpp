#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <iostream>
# include <time.h>

class Span {
private:
	unsigned int _size;
	std::vector<unsigned int> _numVec;
	Span();
public:
	Span(unsigned int size);
	Span(Span const &other);
	virtual ~Span();
public:
	class FullSpanException: public std::exception {
		virtual const char* what() const throw();
	};
	class NotEnoughNumbersException: public std::exception {
		virtual const char* what() const throw();
	};
public:
	Span &operator=(Span const &other);
	void addNumber(int value);
	void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);


	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;
};

#endif