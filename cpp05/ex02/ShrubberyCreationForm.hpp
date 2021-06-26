#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form {
private:
	std::string const target;
	static std::string const trees[3];
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	virtual ~ShrubberyCreationForm();
public:
	class TargetFileOpenException: public std::exception {
		virtual const char* what() const throw();
	};
	class WriteException: public std::exception {
		virtual const char* what() const throw();
	};
public:
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	static std::string const &name;
	void execute(Bureaucrat const &executor) const;
};

#endif