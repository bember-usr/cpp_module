#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
#include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack<T> const &other);
	virtual ~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	MutantStack<T> &operator=(MutantStack<T> const &other);

	iterator begin(void);
	reverse_iterator rbegin(void);
	iterator end(void);
	reverse_iterator rend(void);
};

# include "MutantStack.ipp"

#endif