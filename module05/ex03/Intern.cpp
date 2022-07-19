#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
		return *this;
	}
	else
	{
		return *this;
	}
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form *Intern::makeForm(char const *s, char const *f)
{
	Form * (Intern::*levels[3])(const char *) = {&Intern::makeShrub, &Intern::makePres,&Intern::makeRobot};
	std::string lvls[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	try
	{
		for (int i = 0; i < 3; i++)
			if (lvls[i] == s)
			{
				std::cout << GREEN "Intern Created a " << lvls[i] << " Form" RESET<< std::endl;
				return (this->*(levels[i]))(f);
			}
		throw FormNotFound();
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return NULL;
	}
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
