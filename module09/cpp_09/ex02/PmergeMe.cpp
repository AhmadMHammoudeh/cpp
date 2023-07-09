#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<std::string> args){
	std::cout << "Before: ";
	for (size_t i =0; i < args.size(); i++)
		std::cout<< " " <<args[i];
	std::cout << std::endl;
	for (size_t i = 0; i < args.size(); i++) {
		if (std::isdigit(args.at(i).c_str()[0])){
			vectorStack.push_back(std::atoi(args[i].c_str()));
			dequeStack.push_back(std::atoi(args[i].c_str()));
			}
		else {
			std::cout << "Error" << std::endl;
			return;
		}
	}
	if (vectorStack.size() <= 1 || dequeStack.size() <= 1){
		std::cout << "Error insert more than one argument" << std::endl;
		return;
	}
	struct timeval startV, endV;
	gettimeofday(&startV, NULL);
	fordJohnsonSortVec(vectorStack);
	gettimeofday(&endV, NULL);
	std::cout << "After Vector: ";
	for (size_t i =0; i < vectorStack.size(); i++)
		std::cout<< " " <<vectorStack[i];
	std::cout << std::endl;
	std::cout <<"Time for Vector: us"<< (endV.tv_sec * 1000000 + endV.tv_usec) - (startV.tv_sec * 1000000 + startV.tv_usec) << std::endl;
	
	struct timeval startD, endD;
	gettimeofday(&startD, NULL);
	fordJohnsonSortDeq(dequeStack);
	gettimeofday(&endD, NULL);
	std::cout << "After Deque: ";
	for (size_t i =0; i < dequeStack.size(); i++)
		std::cout<< " " <<dequeStack[i];
	std::cout << std::endl;
	std::cout <<"Time for Deque: us"<< (endD.tv_sec * 1000000 + endD.tv_usec) - (startD.tv_sec * 1000000 + startD.tv_usec) << std::endl;

}
void PmergeMe::fordJohnsonSortVec(std::vector<int> &stack){
	std::vector<int> a;
	std::vector<int> b;
	for (size_t i = 0; i < stack.size(); i++) {
		if (i < stack.size()/2) {
			a.push_back(stack[i]);
		}
		else
			b.push_back(stack[i]);
	}
	if (a.size() > 1) {
	fordJohnsonSortVec(a);
	}
	if (b.size() > 1) {
	fordJohnsonSortVec(b);
	}
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;
	while (i < a.size() && j < b.size()) {
		if (a[i] < b[j])
			stack[k++] = a[i++];
		else if (a[i] > b[j])
			stack[k++] = b[j++];
		else{
			std::cout << "Error duplicate entry: [" << a[i] << " - " << b[j] << "]"<< std::endl;
			exit(1);
		}
	}
	while (i < a.size())
		stack[k++] = a[i++];
	while (j < b.size())
		stack[k++] = b[j++];
}
void PmergeMe::fordJohnsonSortDeq(std::deque<int> &stack){
	std::deque<int> a;
	std::deque<int> b;
	for (size_t i = 0; i < stack.size(); i++) {
		if (i < stack.size()/2) {
			a.push_back(stack[i]);
		}
		else
			b.push_back(stack[i]);
	}
	if (a.size() > 1) {
	fordJohnsonSortDeq(a);
	}
	if (b.size() > 1) {
	fordJohnsonSortDeq(b);
	}
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;
	while (i < a.size() && j < b.size()) {
		if (a[i] < b[j])
			stack[k++] = a[i++];
		else if (a[i] > b[j])
			stack[k++] = b[j++];
		else {
			std::cout << "Error duplicate entry" << std::endl;
			exit(1);
		}
	}
	while (i < a.size())
		stack[k++] = a[i++];
	while (j < b.size())
		stack[k++] = b[j++];
}
PmergeMe::~PmergeMe(){

}
PmergeMe::PmergeMe(){

}
PmergeMe::PmergeMe(PmergeMe const &copy){
	*this = copy;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &copy){
	if (this != &copy)
	{
		this->vectorStack = copy.vectorStack;
		this->dequeStack = copy.dequeStack;
		this->args = copy.args;
	}
	return (*this);
}