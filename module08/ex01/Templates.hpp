#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <vector>
# include <deque>
# include <list>

template<typename T>
void	easyFind(T &z, int i){
	if (find(z.begin(), z.end(), i) != z.end())
		std::cout << "Element has been found" << std::endl;
	else 
		throw std::out_of_range("Element IS NOT found");
}

#endif /* ******************************************************* TEMPLATES_H */
