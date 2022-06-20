#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	this->type = "Animal";
}

WrongAnimal::WrongAnimal(std::string name)
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	this->type = "Animal";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << CYAN << "The Copy Constructor Has been Called !" << std::endl;
	this->type = "WrongAnimal";
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << CYAN << "The Destructor Has been Called !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
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

void WrongAnimal::makeSound()
{
	std::cout << "Some weird WrongAnimal noises" << std::endl;
}

std::string WrongAnimal::getType()
{
	return(type);
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

/* ************************************************************************** */