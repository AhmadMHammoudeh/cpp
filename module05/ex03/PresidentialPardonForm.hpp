#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[3;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm(char const * target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();
		virtual void execute(Bureaucrat const &executor);

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw() { return(CYAN"Grade too low to execute or the form is not signed off!"RESET); };
		};
	private:
		PresidentialPardonForm();
		std::string target;
};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
