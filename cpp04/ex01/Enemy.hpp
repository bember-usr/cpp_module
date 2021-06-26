#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy {
private:
	Enemy();
	int			hp;
	std::string	type;
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &other);
	virtual ~Enemy();
public:
	Enemy				&operator=(Enemy const &other);

	std::string const	&getType() const;
	int					getHP() const;
	virtual void		takeDamage(int);
};

#endif