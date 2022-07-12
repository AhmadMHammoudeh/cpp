#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 137, 145), target("No Target")
{
	std::cout << YELLOW" The Default Constructor is Called" RESET<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(char const * tar) : Form("Shrubbery Creation Form", 137, 145), target(tar)
{
	std::cout << YELLOW" The Default Constructor is Called" RESET<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): Form("Shrubbery Creation Form", 137, 145), target(src.target)
{
	std::cout << RED" The Copy Constructor is Called" RESET<< std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{	
	target = rhs.target;

	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/
void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() <= 137 && getSign())	
	{
		std::ofstream out;
		std::string replacename;
		replacename = (target + "_shrubbery").c_str();

		out.open(replacename.c_str());
		out << "              v .   ._, |_  .," << std::endl;
		out << "           `-._|/  .  | /    |/_" << std::endl;
		out << "               \\  _|, y | |//" << std::endl;
		out << "         _|_.___\\, \\/ -.|||" << std::endl;
		out << "           `7-,--.`._||  / / ," << std::endl;
		out  << "           /'     `-. `./ / |/_.'" << std::endl;
		out << "                     |    |//" << std::endl;
		out << "                     |_    /" << std::endl;
		out << "                     |-   |" << std::endl;
		out << "                     |   =|" << std::endl;
		out << "                     |    |" << std::endl;
		out << "--------------------/ ,  . |--------._" << std::endl;
	}
	else
		throw GradeTooLowException();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
