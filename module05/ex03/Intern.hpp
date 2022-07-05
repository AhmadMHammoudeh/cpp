#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Form *makeForm(char const *s, char const *f);
		Intern &operator=(Intern const &rhs);
		Form *makeShrub(const char *s) { return (new ShrubberyCreationForm(s)); };
		Form *makeRobot(const char *s){ return (new RobotomyRequestForm(s)); };
		Form *makePres(const char *s){ return (new PresidentialPardonForm(s)); };
		class FormNotFound : public std::exception
		{
			const char *what() const throw() { return(CYAN"Form Not Found"RESET); };
		};
	private:
};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */
