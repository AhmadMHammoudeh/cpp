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
	_valuei =static_cast<int>(f);
	_input = f;
	_valuef = f;
	_valuec = f;
	_valued = static_cast<double>(f);
}

Convert::Convert(double f)
{
	_type = "double";
	_valuei = (f);
	_valued = f;
	_valuec = f;
	_valuef = static_cast<float>(f);
	_input = f;
}

Convert::Convert(int f)
{
	_type = "int";
	_valuei = f;
	_valuec = f;
	_valued = static_cast<double>(f);
	_valuef = static_cast<float>(f);
	_input = f;
}

Convert::Convert(char f)
{
	_type = "int";
	_valuei = static_cast<int>(f);
	_valued = static_cast<double>(f);
	_valuef = static_cast<float>(f);
	_valuec = f;
	_input = f;
}

Convert::Convert(std::string f)
{
	_type = "string";
	_input = f;

	std::string codes[6] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
	for (int i = 0; i < 6; i++) {
		if (!_input.compare(codes[i]))
		{
			_type = codes[i];
			if (i > 2)
				_f = 1;
		}
	}
	_spec = 1;
	std::string fs[3] = {"-inff", "+inff","nanf"};
	for (int i = 0; i < 3; i++) {
		if (!_type.compare(fs[i]))
		{
			// _f = 1;
			_type = codes[i];
		}
	}
	// std::cout << _type << std::endl;
	// exit(0);
}

Convert::Convert( const Convert & rhs )
{
	_type = rhs._type;
	_spec = rhs._spec;
	_f = rhs._f;
	_valuec = rhs._valuec;
	_valued = rhs._valued;
	_valuef = rhs._valuef;
	_valuei = rhs._valuei;
	_input = rhs._input;
	
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
	_type = rhs._type;
	_spec = rhs._spec;
	_f = rhs._f;
	_valuec = rhs._valuec;
	_valued = rhs._valued;
	_valuef = rhs._valuef;
	_valuei = rhs._valuei;
	_input = rhs._input;
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
	// std::cout << _valuec << std::endl;
	// if (_valuec < 32 || _valuec > 126)
	// 	return '\0';
	return _valuec;
}

void Convert::getValues(void)
{
	if (_spec)
	{
		std::cout << "Char : " <<  "Impossible" << std::endl;
		std::cout << "Int : " <<  "Impossible" << std::endl;
		if (_f)
		{
			std::cout << "Float : " <<  _type << "f" << std::endl;
		}
		else
		{
			std::cout << "Float : " <<  _type << "f" << std::endl;
		}
		std::cout << "Double : " <<  _type << std::endl;
		return;
	}
	if (_valuei == std::numeric_limits<int>::min() || _valuei == std::numeric_limits<int>::max())
		std::cout << "Char : " << "Impossible" << std::endl;
	else if (_valuec <= 32 || _valuec > 126)
		std::cout << "Char : " << "Non Displayable" << std::endl;
	else
		std::cout <<"Char : " <<  getValuec() << std::endl;
	if (_valuei == std::numeric_limits<int>::min() || _valuei == std::numeric_limits<int>::max())
		std::cout << "Int : " << "Impossible" << std::endl;
	else
		std::cout <<"Int : " <<  getValuei() << std::endl;
	if (_type == "float" || _type == "double")
		std::cout <<"Float : " <<  getValuef() << "f" << std::endl;
	else
		std::cout << "Float : " << getValuef() << ".0f" << std::endl;
	if (_type == "float" || _type == "double")
		std::cout <<"Double : " <<  getValue() << std::endl;
	else
		std::cout << "Double : " << getValue() << ".0" << std::endl;
		
}

/* ************************************************************************** */
