#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat(std::string name)
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << CYAN << "The Copy Constructor Has been Called !" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << CYAN << "The Destructor Has been Called !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
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

void WrongCat::makeSound()
{
	time_t now = time(0);
	if (now % 2 == 0)
		std::cout << "Barrrrkkkkk!!!" << std::endl;
	else
		std::cout << "Did I meow?! I MEANT BAAARRKKKK!!!!!!" << std::endl;
}

/* ************************************************************************** */