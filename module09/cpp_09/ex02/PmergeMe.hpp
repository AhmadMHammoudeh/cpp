#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <fstream>
# include <sstream>
# include <string>
# include <sys/time.h>
# define RED "\033[0;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[3;36m"
# define YELLOW "\033[1;33m"
# define RESET "\033[0m"


class PmergeMe {
	private:
		std::vector<int> vectorStack;
		std::deque<int> dequeStack;
		std::string args;
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe &operator=(PmergeMe const &copy);
		PmergeMe(std::vector<std::string> args);
		~PmergeMe();
		void fordJohnsonSortVec(std::vector<int> &stack);
		void fordJohnsonSortDeq(std::deque<int> &stack);
};

#endif