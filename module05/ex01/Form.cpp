#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): grade_exec(0), grade_sign(0), name("unnammed"), sign(0)
{
	std::cout << YELLOW" The Default Constructor is Called" RESET<< std::endl;
}
Form::Form(const char *n, int e, int s): grade_exec(e), grade_sign(s), name(n), sign(0)
{
	std::cout << RED" The Constructor with Params is Called" RESET<< std::endl;
}

Form::Form( const Form & src ): grade_exec(src.getGradeExec()), grade_sign(src.getGradeSign()), name(src.getName()), sign(src.getSign())
{
	std::cout << RED" The Copy Constructor is Called" RESET<< std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form Name : " << i.getName() << std::endl;
	o << "Form State : " << i.getSign() << std::endl;
	o << "Form Grade Sign : " << i.getGradeSign() << std::endl;
	o << "Form Grade Exec : " << i.getGradeExec() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string Form::getName() const
{
	return (name);
}
int Form::getGradeSign() const
{
	return (grade_sign);
}
int Form::getGradeExec() const
{
	return (grade_exec);
}
bool Form::getSign() const
{
	return (sign);
}
bool Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > getGradeSign())
		throw GradeTooLowException();
	std::cout << "The Bureaucrat signed the "<< getName()<< std::endl;
	sign = 1;
	return (sign);
}

/* ************************************************************************** */
