#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}
Span::Span(unsigned int N)
{
	std::deque<int> temp(N);
	arr = temp;
	size = N;
	c = 0;
}

Span::Span( const Span & src )
{
	this->arr = src.arr;
	size = src.size;
	c = src.c;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	this->arr = rhs.arr;
	size = rhs.size;
	c = rhs.c;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span & i )
{
	o << "Longest Span = " << i.longestSpan() <<"Shortest Span = " << i.shortestSpan() ;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int num, int amount)
{
	// int i = 0;
	int j;
	for (int i = 0; i < amount; i++)
	{
		// i++;
		arr.pop_front();
		c++;
		j = i;
		if (c == size){
			j++;
			break;
		}
	}
	// std::cout << j << std::endl;
	std::fill_n(std::back_inserter(arr), j, num);
	if (j < amount)
		throw std::out_of_range("You cannot add more than the array size!");
	// printList();
}
void Span::addNumber(int num)
{
	try{
	if (c < size)
	{
		c++;
		arr.pop_front();
		arr.push_back(num);
		// std::cout << arr.size() << std::endl;
	}
	else
		throw std::out_of_range("You added the max ammount of elements!");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// std::cout << arr. << std::endl;
}
void Span::printList()
{
	std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, "\n"));
}

int Span::shortestSpan(){
	int temp;
	int shortest = INT_MAX;

	if (c < 2)
		throw std::out_of_range("No enough member to get a span!");
	temp = 0;
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < c; j++){
			if (i != j){
				temp = arr[i] - arr[j];
				temp = std::abs(temp);
				if (temp < shortest)
					shortest = temp;
			}
		}
	}
	return shortest;
}

int Span::longestSpan(){
	int max;
	int longest;
	int least;
	std::deque<int>::iterator result;
	
	if (c < 2)
		throw std::out_of_range("No enough member to get a span!");
	result = std::max_element(arr.begin(), arr.end());
	// std::cout << "max element at: " << std::distance(arr.begin(), result) << std::endl;
	max = std::distance(arr.begin(), result);
	
	result = std::min_element(arr.begin(), arr.end());
	// std::cout << "min element at: " << std::distance(arr.begin(), result) << std::endl;
	least = std::distance(arr.begin(), result);
	
	longest = arr[max] - arr[least];
	return longest;
}
// int Span::longestSpan(){
	
// }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
