#include "RPN.hpp"

RPN::RPN(std::string str){
	sum = 0;
	std::istringstream string_stream(str);
	std::string input;
	while (string_stream >> input) {
		if (input.size() > 1) {
			std::cout << "invalid input" << std::endl;
			return ;
		}
		if(std::isdigit(input[0]) || input == " "|| input == "*"|| input == "+"|| input == "-"|| input == "/") {
		if(std::isdigit(input[0])) {
			if (std::atoi(input.c_str()) > 9){
				std::cout << "Number too big" << std::endl;
				return ;
			}
			arguments.push(std::atoi(input.c_str()));
		}
		else {
			if (arguments.size() < 2)
			{
				std::cout << "Not enough arguments to do calculations, please check the values and order!!"<< std::endl;
				return ;
			}
			arg2 = arguments.top();
			arguments.pop();
			arg1 = arguments.top();
			arguments.pop();

			if (input == "*"){
				sum = (arg1 * arg2);
			}
			else if (input == "+"){
				sum = (arg1 + arg2);
			}			
			else if (input == "-"){
				sum = (arg1 - arg2);
			}			
			else if (input == "/"){
				sum = (arg1 / arg2);
			}
			arguments.push(sum);
		}
		}
		else {
			std::cout << "Input error ==>"<< input << std::endl;
			return;
		}

	}
	if (arguments.size() != 1){
		std::cout << "Missing operators, numbers are still in stack" << std::endl;
	}
	std::cout << arguments.top() << std::endl;

}
RPN::~RPN(){

}
RPN::RPN(RPN const &copy){
*this = copy;
}
RPN &RPN::operator=(RPN const &copy){
	if (this != &copy)
	{
		this->arguments = copy.arguments;
		this->sum = copy.sum;		
		this->arg1 = copy.arg1;
		this->arg2 = copy.arg2;
	}
	return (*this);

}