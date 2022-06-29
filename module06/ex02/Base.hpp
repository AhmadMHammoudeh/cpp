#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class Base
{

	public:

		Base();
		Base( Base const & src );
		virtual ~Base();

		Base &		operator=( Base const & rhs );

	private:

};


#endif /* ************************************************************ BASE_H */
