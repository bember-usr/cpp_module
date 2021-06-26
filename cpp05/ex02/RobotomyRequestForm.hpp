#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include "Form.hpp"

class RobotomyRequestForm: public Form {
private:
	std::string const target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	virtual ~RobotomyRequestForm();
public:
    RobotomyRequestForm &operator=(RobotomyRequestForm const &other);
	
    static std::string const &name;
	void execute(Bureaucrat const &executor) const;
};

#endif