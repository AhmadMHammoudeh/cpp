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
		const static Fixed &		min(const Fixed & lhs, const Fixed & rhs);
		static Fixed &		min(Fixed & lhs, Fixed & rhs);
		const static Fixed &		max(const Fixed & lhs, const Fixed & rhs);
		static Fixed &		max(Fixed & lhs, Fixed & rhs);
		bool		operator!=( Fixed const & rhs ) const;
		bool		operator==( Fixed const & rhs ) const;
		bool		operator<( Fixed const & rhs ) const;
		bool		operator>( Fixed const & rhs ) const;
		Fixed		operator+( Fixed const & rhs ) const;
		Fixed		operator-( Fixed const & rhs ) const;
		Fixed		operator*( Fixed const & rhs ) const;
		Fixed		operator/( Fixed const & rhs ) const;
		Fixed&		operator--();
		Fixed		operator--(int);
		Fixed&		operator++();
		Fixed		operator++(int);
		int			getRawBits( void ) const;
		float		toFloat( void ) const;
		float		toInt( void ) const;
		void		setRawBits( int const raw );
	private:
		int			cInt;
		static const int fPoint;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */
