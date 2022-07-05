#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	//o << "Value = " << i.getValue();
	return o;
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
				return (this->*(levels[i]))(s);
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
