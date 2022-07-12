#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 45, 72), target("No Target")
{
	std::cout << YELLOW" The Default Constructor is Called" RESET<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(char const * tar) : Form("Robotomy Request Form", 45, 72), target(tar)
{
	std::cout << YELLOW" The Default Constructor is Called" RESET<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): Form("Robotomy Request Form", 45, 72), target(src.target)
{
	std::cout << RED" The Copy Constructor is Called" RESET<< std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	target = rhs.target;

	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() <= 137 && getSign())
	{
		time_t now = time(0);
		if (now % 2 == 0)
			std::cout << target << " Has been Robotomized!" << std::endl;
		else
			std::cout << "Robotomization Has Failed try again in a sec :((" << std::endl;		
	}
	else
		throw GradeTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
