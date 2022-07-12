#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(): name("Default"), grade(1)
{
	std::cout << YELLOW" The Default Constructor is Called" RESET<< std::endl;
}

Bureaucrat::Bureaucrat(const char *n, int g): name(n), grade(g)
{
	std::cout << RED" The Constructor with Params is Called" RESET<< std::endl;
	if (grade < 1)
		throw(GradeTooLowException());
	if (grade > 150)
		throw(GradeTooLowException());
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): name(src.getName())
{
	std::cout << RED " The Copy Constructor is Called" RESET<< std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	grade = rhs.grade;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat & i )
{
	o << i.getName() << " bureaucrat " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Bureaucrat::getName() const
{
	return (name);
}
int Bureaucrat::getGrade() const
{
	return (grade);
}

void	Bureaucrat::increGrade()
{
	if (grade - 1 == 0)
		throw GradeTooHighException();
	grade -= 1;
}

void	Bureaucrat::decreGrade()
{
	if (grade + 1 == 151)
		throw GradeTooHighException();
	grade += 1;
}

void	Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSignedSilent(*this);
		std::cout << name << " Signed " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << name << " Couldnt Sign " << f.getName() << " Because level too low "<<std::endl;
	}
}

/* ************************************************************************** */
