#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert()
{
	_type = "Empty";
	_input = "";
}

Convert::Convert(float f, std::string type)
{
	_type =type;
	_valuei =static_cast<int>(f);
	_input = std::to_string(f) ;
	_valuef = static_cast<float>(f);
	_valuec = static_cast<char>(f);
	_valued = static_cast<double>(f);
	_spec = 0;
}

Convert::Convert(double f, std::string type)
{
	_type = type;
	_valuei = static_cast<int>(f);
	_valued = static_cast<double>(f);
	_valuec = static_cast<char>(f);
	_valuef = static_cast<float>(f);
	_input = std::to_string(f);
	_spec = 0;
}

Convert::Convert(int f, std::string type)
{
	_type = type;
	_valuei = static_cast<int>(f);
	_valuec = static_cast<char>(f);
	_valued = static_cast<double>(f);
	_valuef = static_cast<float>(f);
	_input = std::to_string(f);
	_spec = 0;
}

Convert::Convert(char f, std::string type)
{
	_type = type;
	_valuei = static_cast<int>(f);
	_valued = static_cast<double>(f);
	_valuef = static_cast<float>(f);
	_valuec = static_cast<char>(f);
	_spec = 0;
	_input = f;
}

Convert::Convert(std::string f, std::string type)
{
	if (type != "string")
		_type = "string";
	else
		_type = type;
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
	exit(0);
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
std::string Convert::getInput(void) const
{
	return _input;
}
std::string Convert::getType(void) const
{
	return _type;
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
	if (_spec == 1)
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
	if (strrchr(_input.c_str(), '.') == NULL || getValuei() == getValuef())
		std::cout <<"Float : " <<  getValuef() << ".0f" << std::endl;
	else
		std::cout << "Float : " << getValuef() << "f" << std::endl;
	if (strrchr(_input.c_str(), '.') == NULL || getValuei() == getValuef())
		std::cout << "Double : " << getValue() << ".0" << std::endl;
	else
		std::cout <<"Double : " <<  getValue() << std::endl;
		
}

/* ************************************************************************** */
