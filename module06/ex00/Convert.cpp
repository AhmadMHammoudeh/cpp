#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert()
{
	_type = "Empty";
	_input = "";
}

Convert::Convert(float f)
{
	_type = "float";
	_valuei = 0;
	_input = f;
	_valuef = f;
}

Convert::Convert(double f)
{
	_type = "double";
	_valuei = 0;
	_valued = f;
	_input = f;
}

Convert::Convert(int f)
{
	_type = "int";
	_valuei = f;
	_input = f;
}

Convert::Convert(char f)
{
	_type = "int";
	_valuei = 0;
	_valuec = f;
	_input = f;
}

Convert::Convert(std::string f)
{
	_type = "string";
	_input = f;

	std::string special[6] = {"-inff", "+inff", "-inf", "+inf", "nanf", "nan"};
	for (int i = 0; i < 6; i++) {
		if (!_input.compare(special[i]))
			_type = special[i];
	}
	std::cout << _type << std::endl;
	exit(0);
}

Convert::Convert( const Convert & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &				Convert::operator=( Convert const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}


std::ostream &			operator<<( std::ostream & o, Convert const & i )
{
	o << i.getValue();
	return (o);
}
// std::ostream &			operator<<( std::ostream & o, Convert const & i )
// {
// 	return (o << "Value = " << i.getValue());
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

// Convert::operator float( void )
// {
// 	return (float)this->_value;
// }

// Convert::operator double( void )
// {
// 	return (double)this->_value;
// }

// Convert::operator int( void )
// {
// 	return (int)this->_value;
// }
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

double Convert::getValue(void) const
{

	return _valued;
}
float Convert::getValuef(void) const
{
	return _valuef;
}
int Convert::getValuei(void) const
{
	return _valuei;
}
char Convert::getValuec(void) const
{
	if (_valuei < 32 || _valuei > 126)
		return '\0';
	return _valuec;
}

void Convert::getValues(void)
{
	std::cout << getValuec() << std::endl;
	std::cout << getValuei() << std::endl;
	std::cout << getValuef() << std::endl;
	std::cout << getValue() << std::endl;
}

/* ************************************************************************** */