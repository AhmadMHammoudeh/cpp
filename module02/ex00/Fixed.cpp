#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->cInt = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy Constructor operator called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	this->cInt = 0;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->cInt = rhs.getRawBits();
	}
	return *this;
}




/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->cInt);
}

void Fixed::setRawBits(int const raw) 
{
	std::cout << "setRawBits member function called" << std::endl;
	this->cInt = raw;
}

/* ************************************************************************** */
