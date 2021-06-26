#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
private:
	class Pair {
	private:
		std::string const name;
		Form *(*fct)(std::string const &);
		Pair();
	public:
		Pair(std::string const &name, Form *(*fct)(std::string const &));
		Pair(Pair const &other);
		virtual ~Pair();
	public:
		Pair &operator=(Pair const &other);

		bool correspond(std::string const &name) const;
		Form *execute(std::string const &target) const;
	};
	Pair *generators[9];
public:
	Intern();
	Intern(Intern const &other);
	virtual ~Intern();
public:
	class FormDoesNotExistException: public std::exception {
		virtual const char* what() const throw();
	};
public:
	Intern &operator=(Intern const &other);

	Form *makeForm(std::string const &formName, std::string const &target) const;
};

#endif