#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		Fixed( const int src );
		Fixed( const float src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );
		int getRawBits( void ) const;
		float toFloat( void ) const;
		float toInt( void ) const;
		void setRawBits( int const raw );
	private:
		int cInt;
		static const int fPoint;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */
