#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <vector>
# include <deque>
# include <list>

class Span
{

	public:

		Span(unsigned int N);
		Span( Span const & src );
		~Span();
		void addNumber(int num);
		void addNumber(int num, int amount);
		int shortestSpan();
		int	longestSpan();
		int shortestSpan() const;
		int	longestSpan() const;
		void printList();
		Span &operator=(Span const &rhs);

	private:
		std::deque<int> arr;
		int c;
		int size;
		Span();
};

std::ostream &			operator<<( std::ostream & o, Span & i );

#endif /* ************************************************************ SPAN_H */
