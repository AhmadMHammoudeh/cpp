#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	this->type = "Animal";
}

Animal::Animal(std::string name)
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	this->type = "Animal";
}

Animal::Animal( const Animal & src )
{
	std::cout << CYAN << "The Copy Constructor Has been Called !" << std::endl;
	this->type = "Animal";
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << CYAN << "The Destructor Has been Called !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
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

std::string Animal::getType()
{
	return(type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}
/* ************************************************************************** */