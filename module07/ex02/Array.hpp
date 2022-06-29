#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<class T>
class Array
{

	public:
		Array() { arr = new T();
			sizer = 0;
		};
		Array(unsigned int i){
			T *r = new T();
			arr = new T[i];
			sizer = i;
			for (int i = 0; i < sizer; i++)
				arr[i] = *r;
		};
		Array( Array const & src ){
			arr = new T[src.sizer];
			sizer = src.sizer;
			for (int i = 0; i < sizer; i++)
				arr[i] = src.arr[i];
		};
		Array &		operator=( Array const & rhs ){
			arr = new T[rhs.sizer];
			sizer = rhs.sizer;
			for (int i = 0; i < sizer; i++)
				arr[i] = rhs.arr[i];
		};
		T &operator[](int i) { 
			if (i < 0 || i >= sizer)
				throw std::runtime_error("Wrong Size");
			return (arr[i]); };
		~Array(){
			if (sizer)
				delete (arr);
		};
		int size() { return (sizer); };
		T *arr;
		int sizer;
	private:
};


#endif /* *********************************************************** ARRAY_H */
