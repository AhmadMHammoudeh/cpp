#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[3;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Form;
class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(const char *n, int g);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		class GradeTooHighException : public std::exception
		{
			const char * what() const throw(){ return("Grade too High"); };
		};
		
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw() { return("Grade too low"); };
		};

		std::string getName() const;
		int getGrade() const;
		void increGrade();
		void decreGrade();
		void signForm(Form &f);
		void executeForm(Form &f);
	private:
		const std::string name;
		int grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat & i );

#endif /* ****************************************************** BUREAUCRAT_H */
