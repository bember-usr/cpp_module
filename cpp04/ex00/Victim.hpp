#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim {
protected:
	Victim();
	std::string _name;
public:
	Victim(std::string const &name);
	Victim(Victim const &other);
	virtual ~Victim();
public:
	Victim			&operator=(Victim const &other);

	std::string		get_name() const;
	/*ключевое слово virtual позволяет реализовать
	функцию в базовом классе, чтобы в классе наследнике
	переопределить ее поведение. таким образом
	раелизуется полиморфизм
	*/
	virtual void	getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, Victim const &value);

#endif