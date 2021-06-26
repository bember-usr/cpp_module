#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad: public ISquad {
private:
	ISpaceMarine **marines;
	int count;
public:
	Squad();
	Squad(Squad const &other);
	virtual ~Squad();
public:
	Squad			&operator=(Squad const &other);

	int				getCount() const;
	ISpaceMarine 	*getUnit(int num) const;
	int				push(ISpaceMarine *unit);
};

#endif