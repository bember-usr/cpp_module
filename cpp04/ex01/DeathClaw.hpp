#ifndef DEATHCLAW_HPP
# define DEATHCLAW_HPP

#include "Enemy.hpp"

class DeathClaw: public Enemy {
public:
	DeathClaw();
	DeathClaw(DeathClaw const &other);
	virtual ~DeathClaw();
public:
	DeathClaw	&operator=(DeathClaw const &other);

	void		takeDamage(int dmg);
};

#endif