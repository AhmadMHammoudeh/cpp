#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[3;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm(char const * target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();
		virtual void execute(Bureaucrat const &executor);
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw() { return(CYAN"Grade too low to execute or the form is not signed off!"RESET); };
		};
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
		
	private:
		ShrubberyCreationForm();
		std::string target;
};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
