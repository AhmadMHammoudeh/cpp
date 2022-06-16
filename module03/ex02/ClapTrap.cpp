#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(std::string name)
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	this->name = name;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 0;
}

ClapTrap::ClapTrap()
{
	std::cout << CYAN << "The Constructor Has been Called !" << std::endl;
	this->name = "Default";
	this->attackDamage = 20;
	this->energyPoints = 50;
	this->hitPoints = 100;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << RED<<"Copy Constructor Has been Called !" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << GREEN <<"The Destructor Has been Called !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name<< " attacks " << target<< " ,causing " << this->attackDamage<< " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= this->attackDamage;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
