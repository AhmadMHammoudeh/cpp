#include "dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	setType("Dog");
	brain = new Brain();
}

Dog::Dog(std::string name)
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	setType("Dog");
	brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << CYAN << "The Copy Constructor Has been Called !" << std::endl;
	setType("Dog");
	brain = new Brain();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << CYAN << "The Destructor Has been Called !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	std::string temp;
	i = 0;
	while (i < 100)
	{
		temp = rhs.brain->getIdeas(i) ;
		setIdea(temp);
	}
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

void Dog::setIdea(std::string idea)
{
	brain->createIdeas(idea, i);
	i++;
}

std::string Dog::getIdea(int j)
{
	return (brain->getIdeas(j));
}

/* ************************************************************************** */