#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISpaceMarine.hpp"
//интерейсы - полностью абстрактные классы
class ISquad {
public:
	virtual ~ISquad() {}
public:
	virtual int				getCount() const = 0;
	virtual ISpaceMarine* 	getUnit(int) const = 0;
	virtual int				push(ISpaceMarine*) = 0;
};

#endif