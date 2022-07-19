#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <vector>
# include <deque>
# include <list>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{

	public:

		MutantStack(): std::stack<T>(){};
		MutantStack( MutantStack const & src );
		virtual ~MutantStack(){};
		MutantStack &operator=(MutantStack const &rhs);
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void) { return this->c.begin(); };
		iterator end(void) { return this->c.end(); };
};

// std::ostream &			operator<<( std::ostream & o, MutantStack const & i );

#endif /* ***************************************************** MUTANTSTACK_H */
