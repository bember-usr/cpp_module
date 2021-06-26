#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i = -1;

	this->know = 0;
	while (++i < 4)
		this->storage[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	int i = -1;

	while (++i < 4)
		delete(this->storage[i]);
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	int i = -1;

	this->know = 0;
	while (++i < 4)
		this->storage[i] = nullptr;
	*this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	int i = -1;

	if (this == &other)
		return (*this);
	while (++i < 4)
	{
		delete (this->storage[i]);
		this->storage[i] = nullptr;
	}
	i = -1;
	while (++i < other.know && other.storage[i])
		this->learnMateria(other.storage[i]->clone());
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	int i = -1;

	if (this->know == 4 || materia == nullptr)
		return ;
	while (++i < this->know)
		if (this->storage[i] == materia)
			return ;
	this->storage[this->know] = materia;
	this->know++;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = -1;

	if (this->know == 0)
		return (nullptr);
	while (++i < this->know && this->storage[i] != nullptr)
		if (this->storage[i]->getType().compare(type) == 0)
			return (this->storage[i]->clone());
	return (nullptr);
}