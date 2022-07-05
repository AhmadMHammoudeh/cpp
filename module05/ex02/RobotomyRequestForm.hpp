#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[3;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm(char const * target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();
		virtual void execute(Bureaucrat const &executor);

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw() { return(CYAN"Grade too low to execute or the form is not signed off!"RESET); };
		};
	private:
		RobotomyRequestForm();
		std::string target;
};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
