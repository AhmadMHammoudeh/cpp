#include "cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	setType("cat");
	brain = new Brain();
	i = 0;
}

Cat::Cat(std::string name)
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	setType("cat");
	brain = new Brain();
	i = 0;
}

Cat::Cat( const Cat & src ):Animal()
{
	std::cout << CYAN << "The Copy Constructor Has been Called !" << std::endl;
	setType("cat");
	brain = new Brain();
	std::string temp;
	i = 0;
	while (i < 100)
	{
		temp = src.brain->getIdeas(i) ;
		setIdea(temp);
	}
	i = 0;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << CYAN << "The Destructor Has been Called !" << std::endl;
	delete (brain);
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << CYAN << "The Equal Operator has been called !" << std::endl;
	std::string temp;
	i = 0;
	while (i < 100)
	{
		temp = rhs.brain->getIdeas(i) ;
		setIdea(temp);
	}
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

void Cat::setIdea(std::string idea)
{
	brain->createIdeas(idea, i);
	i++;
}

std::string Cat::getIdea(int j)
{
	return (brain->getIdeas(j));
}
/* ************************************************************************** */
