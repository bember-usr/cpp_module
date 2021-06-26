#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
class Form;
# include "Bureaucrat.hpp"

class Form {
private:
	std::string const &name;
	bool _signed;
	int const signGrade;
	int const executeGrade;
	Form();
public:
	Form(std::string const &name, int const signGrade, int const executeGrade);
	Form(Form const &other);
	virtual ~Form();
public:
	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	class FormAlreadySignedException: public std::exception {
		virtual const char* what() const throw();
	};
	class UnsignedFormException: public std::exception {
		virtual const char* what() const throw();
	};
public:
	Form &operator=(Form const &other);

	std::string const &getName() const;
	bool isSigned() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const &bureaucrat) const = 0;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif