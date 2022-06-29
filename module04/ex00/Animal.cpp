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
	std::cout << CYAN << "The Animal Destructor Has been Called !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
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

void Animal::makeSound()
{
	std::cout << "Some weird Animal noises" << std::endl;
}

std::string Animal::getType()
{
	return(type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

/* ************************************************************************** */
