#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <exception>
# include <algorithm>

class OutOfFunc: public std::exception {
public:
	virtual const char *what() const throw()
	{
		return ("Exception: Element not found");
	}
};

template<typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator startIter = container.begin();
	typename T::iterator stopIter = container.end();
	typename T::iterator res = std::find(startIter, stopIter, value);
	if (res == stopIter)
		throw OutOfFunc();
	return (res);
}

#endif