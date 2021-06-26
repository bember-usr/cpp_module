#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form {
private:
	std::string const target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	virtual ~PresidentialPardonForm();
public:
	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

	static std::string const &name;
	void execute(Bureaucrat const &executor) const;
	static Form *generate(std::string const &target);
};

#endif