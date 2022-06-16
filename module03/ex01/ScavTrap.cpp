#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	std::cout << YELLOW << "The SCAV Has been Called !" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << YELLOW << "The SCAV Constructor Has been Called !" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << YELLOW<<"The SCAV Constructor Has been Called !" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << RED <<"The SCAV Destructor Has been Called !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::gaurdGate()
{
	std::cout << "ScavTrap " << "is now in Gate Keeper mode" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
