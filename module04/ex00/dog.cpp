#include "dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	setType("Dog");
}

Dog::Dog(std::string name)
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	setType("Dog");
}

Dog::Dog( const Dog & src )
{
	std::cout << CYAN << "The Copy Constructor Has been Called !" << std::endl;
	setType("Dog");
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << CYAN << "The DOG Destructor Has been Called !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
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

void Dog::makeSound()
{
	time_t now = time(0);
	if (now % 2 == 0)
		std::cout << "Barrrrkkk!!!!!" << std::endl;
	else
		std::cout << "woooof! I mean Barrrrkkkk!!!!!" << std::endl;
}

/* ************************************************************************** */
