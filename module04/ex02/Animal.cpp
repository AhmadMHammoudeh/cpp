#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	this->type = "Animal";
	i = 0;
}

Animal::Animal(std::string name)
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	this->type = "Animal";
	i = 0;
}

Animal::Animal( const Animal & src )
{
	std::cout << CYAN << "The Copy Constructor Has been Called !" << std::endl;
	this->type = "Animal";
	i = 0;
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
	std::cout << CYAN << "THIS ANIMAL Constructor Has been Called !" << std::endl;
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


void Animal::setIdea(std::string idea)
{
	brain->createIdeas(idea, i);
	i++;
}

std::string Animal::getIdea(int j)
{
	return (brain->getIdeas(j));
}
/* ************************************************************************** */
