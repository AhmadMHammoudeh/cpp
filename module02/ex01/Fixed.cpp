#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

const int Fixed::fPoint = 8;

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

Fixed::Fixed( const int src )
{
	std::cout << "INT Constructor operator called" << std::endl;
	this->cInt = src << fPoint;
}

Fixed::Fixed( const float src )
{
	std::cout << "FLOAT Constructor operator called" << std::endl;
	this->cInt = roundf(src * (1 << fPoint));
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

std::ostream&
operator <<(std::ostream &stream, const Fixed &fixed)
{
	return (stream << fixed.toFloat());
}



/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits(void) const
{
	return(this->cInt);
}

void Fixed::setRawBits(int const raw) 
{
	this->cInt = raw;
}

float Fixed::toFloat(void) const
{
	return(((float)this->cInt)/ (1<<fPoint));
}
float Fixed::toInt(void) const
{
	return((this->cInt)/ (1<<fPoint) );
}

/* ************************************************************************** */