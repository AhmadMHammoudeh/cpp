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

template<typename T>
void iter(T *x, int y, void (*f)(T &z)){
	for (int i = 0; i < y; i++){
		f(x[i]);
	}
}

#endif /* ******************************************************* TEMPLATES_H */
