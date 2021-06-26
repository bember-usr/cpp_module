#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


# include <iostream>
# include <string>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat {
private:
	std::string const name;
	int grade;
	Bureaucrat();
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &other);
	virtual ~Bureaucrat();
public:
	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
public:
	Bureaucrat &operator=(Bureaucrat const &other);

	std::string const &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form) const;

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif