#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
private:
	int know;
	AMateria *storage[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	virtual ~MateriaSource();
public:
	MateriaSource	&operator=(MateriaSource const &other);

	void			learnMateria(AMateria *materia);
	AMateria		*createMateria(std::string const &type);
};

#endif