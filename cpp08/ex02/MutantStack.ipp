template<typename T>
MutantStack<T>::MutantStack()
		:
		std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &other)
		:
		std::stack<T>(other) {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &other)
{
	if (this == &other)
		return (*this);
	this->c = other.c;
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
	return (this->c.rend());
}