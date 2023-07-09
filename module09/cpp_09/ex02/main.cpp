#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 3) {
		std::cout << "err" << std::endl;
	}
	int i = 1;
	std::vector<std::string> args;
	while (argv[i]) {
		args.push_back(argv[i++]);
	}
	PmergeMe merg = PmergeMe(args);
}