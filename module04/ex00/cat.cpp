#include "cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	setType("cat");
}

Cat::Cat(std::string name)
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	setType("cat");
}

Cat::Cat( const Cat & src )
{
	std::cout << CYAN << "The Copy Constructor Has been Called !" << std::endl;
	setType("cat");
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << CYAN << "The CAT Destructor Has been Called !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Cat::makeSound()
{
	time_t now = time(0);
	if (now % 2 == 0)
		std::cout << "Meoooow!!!!!" << std::endl;
	else
		std::cout << "Meowwwwwwww Meoooow!!!!!" << std::endl;
}

/* ************************************************************************** */
