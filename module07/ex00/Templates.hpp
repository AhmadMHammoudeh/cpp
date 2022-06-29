#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

# include <iostream>
# include <string>

template<typename T>
T	const &max(T const &x, T const &y){
	return (x >= y ? x : y);
}

template<typename T>
T	const &min(T const &x, T const &y){
	return (x > y ? y : x);
}

template<typename T>
T	const &max(T  &x, T  &y){
	return (x >= y ? x : y);
}

template<typename T>
T	const &min(T const &x, T  &y){
	return (x > y ? y : x);
}

template<typename T>
void swap(T &x, T &y){
	T temp;
	temp = x;
	x = y;
	y = temp;
}
#endif /* ******************************************************* TEMPLATES_H */
