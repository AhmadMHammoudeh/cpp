#ifndef CLASSES_HPP
# define CLASSES_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class ClassA : public Base
{

	public:

		ClassA();
		ClassA( ClassA const & src );
		~ClassA();

		ClassA &		operator=( ClassA const & rhs );

	private:

};

class ClassB : public Base
{

	public:

		ClassB();
		ClassB( ClassB const & src );
		~ClassB();

		ClassB &		operator=( ClassB const & rhs );

	private:

};

class ClassC : public Base
{

	public:

		ClassC();
		ClassC( ClassC const & src );
		~ClassC();

		ClassC &		operator=( ClassC const & rhs );

	private:

};


#endif /* ********************************************************* CLASSES_H */
