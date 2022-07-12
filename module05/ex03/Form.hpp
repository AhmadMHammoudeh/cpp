#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>
#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[3;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Bureaucrat;
class Form
{

	public:

		Form();
		Form( const char *n, int e, int s);
		Form( Form const & src );
		virtual ~Form();

		class GradeTooHighException : public std::exception
		{
			const char * what() const throw(){ return("Grade too High"); };
		};
		
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw() { return("Grade too low"); };
		};
		std::string getName() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool getSign() const;
		bool beSigned(Bureaucrat &b);
		bool beSignedSilent(Bureaucrat &b);
		virtual void execute(Bureaucrat const &executor) = 0;

	private:
		int const grade_exec;
		int const grade_sign;
		std::string const name;
		bool sign;
		
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
