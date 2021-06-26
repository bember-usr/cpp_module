#ifndef TACTICALMARINE
# define TACTICALMARINE

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &other);
	virtual ~TacticalMarine();
public:
	TacticalMarine	&operator=(TacticalMarine const &other);

	ISpaceMarine 	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};

#endif