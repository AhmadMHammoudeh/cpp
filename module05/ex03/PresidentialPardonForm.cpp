#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("Robotomy Request Form", 45, 72), target("No Target")
{
	std::cout << YELLOW" The Default Constructor is Called" RESET<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(char const * tar) : Form("Robotomy Request Form", 45, 72), target(tar)
{
	std::cout << YELLOW" The Default Constructor is Called" RESET<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): Form("Robotomy Request Form", 45, 72), target(src.target)
{
	std::cout << RED" The Copy Constructor is Called" RESET<< std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	target = rhs.target;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() <= 137 && getSign())	
		std::cout << target << " Has been pardoned by Zaphod Beeblebrox!" << std::endl;	
	else
		throw GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
