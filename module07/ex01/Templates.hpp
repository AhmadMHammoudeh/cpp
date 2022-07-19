#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

# include <iostream>
# include <string>

template<typename T>
void fun(T &z){
		z = z + 1;
		z = z - 1;
	std::cout << z << std::endl;
}

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }


template<typename T>
void iter(T *x, int y, void (*f)(T &z)){
	for (int i = 0; i < y; i++){
		f(x[i]);
	}
}
template<typename T>
void iter(T *x, int y, void (*f)(T const &z)){
	for (int i = 0; i < y; i++){
		f(x[i]);
	}
}

#endif /* ******************************************************* TEMPLATES_H */
