#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "a brain has been created" << std::endl;
	ideas[0] = "";
}

Brain::Brain( const Brain & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Brain::createIdeas(std::string idea, int i)
{
	// std::cout << "Making Ideas" << idea << std::endl;
	this->ideas[i] = idea;	// std::cout << ideas[0] << std::endl;
}

std::string Brain::getIdeas(int j)
{
	std::cout << "Getting Ideas" << std::endl;
	return(this->ideas[j]);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */