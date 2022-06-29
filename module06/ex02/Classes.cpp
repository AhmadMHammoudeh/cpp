#include "Classes.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClassA::ClassA()
{
}

ClassA::ClassA( const ClassA & src )
{
}

ClassB::ClassB()
{
}

ClassB::ClassB( const ClassB & src )
{
}

ClassC::ClassC()
{
}

ClassC::ClassC( const ClassC & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClassA::~ClassA()
{
}

ClassB::~ClassB()
{
}

ClassC::~ClassC()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClassA &				ClassA::operator=( ClassA const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

ClassB &				ClassB::operator=( ClassB const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

ClassC &				ClassC::operator=( ClassC const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
