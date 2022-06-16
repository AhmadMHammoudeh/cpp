#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	this->cInt = 0;
}

Fixed::Fixed( const Fixed & src )
{
	*this = src;
}

Fixed::Fixed( const int src )
{
	this->cInt = src << fPoint;
}

Fixed::Fixed( const float src )
{
	this->cInt = roundf(src * (1 << fPoint));
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	this->cInt = 0;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
	{
		this->cInt = rhs.getRawBits();
	}
	return *this;
}

Fixed &				Fixed::min( Fixed & lhs, Fixed & rhs )
{
	return (lhs < rhs? lhs: rhs);
}

const Fixed &				Fixed::min( Fixed const & lhs, Fixed const & rhs )
{
	return (lhs < rhs? lhs: rhs);
}

Fixed &				Fixed::max( Fixed & lhs, Fixed & rhs )
{
	return (lhs > rhs? lhs: rhs);
}

const Fixed &				Fixed::max( Fixed const & lhs, Fixed const & rhs )
{
	return (lhs > rhs? lhs: rhs);
}

bool		Fixed::operator!=( Fixed const & rhs ) const
{
	return (getRawBits()!=rhs.getRawBits());
}

bool		Fixed::operator==( Fixed const & rhs ) const
{
	return (getRawBits()==rhs.getRawBits());
}

bool		Fixed::operator<( Fixed const & rhs ) const
{
	return (getRawBits()<rhs.getRawBits());
}

bool		Fixed::operator>( Fixed const & rhs ) const
{
	return (getRawBits()>rhs.getRawBits());
}

Fixed		Fixed::operator*( Fixed const & rhs ) const
{
	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed		Fixed::operator/( Fixed const & rhs ) const
{
	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed		Fixed::operator+( Fixed const & rhs ) const
{
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed		Fixed::operator-( Fixed const & rhs ) const
{
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed&		Fixed::operator--()
{
	cInt -= 1;
	return (*this);
}

Fixed&		Fixed::operator++()
{
	cInt += 1;
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed temp(*this);

	cInt++;
	return (temp);
}

Fixed		Fixed::operator--(int)
{
	Fixed temp(*this);

	cInt--;
	return (temp);
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
