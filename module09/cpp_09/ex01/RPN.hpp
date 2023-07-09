#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <fstream>
#include <sstream>
# include <string>
# define RED "\033[0;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[3;36m"
# define YELLOW "\033[1;33m"
# define RESET "\033[0m"


class RPN {
	private:
		std::stack<int> arguments;
		int sum;
		int arg1;
		int arg2;
	public:
		RPN(std::string input);
		~RPN();
		RPN();
		RPN(RPN const &copy);
		RPN &operator=(RPN const &copy);
		void parse();
};

#endif