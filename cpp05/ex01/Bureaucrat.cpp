#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade)
		:
		name(name),
		grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
		:
		name(other.name),
		grade(other.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException: Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException: Grade too Low");
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->grade = other.grade;
	return (*this);
}

std::string const &Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	this->grade -= 10;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->grade += 10;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form) const
{
	if (form.isSigned())
	{
		std::cout << *this << " cannot sign " << form
				<< " because the form is already signed." << std::endl;
	}
	else if (form.getSignGrade() < this->grade)
	{
		std::cout << *this << " cannot sign " << form
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " signs " << form << std::endl;
	}
	form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName()
		<< " (Grade " << bureaucrat.getGrade() << ")";
	return (out);
}