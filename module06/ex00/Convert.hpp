#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <limits>
class Convert
{

	public:

		Convert();
		Convert(float f);
		Convert(double f);
		Convert(int f);
		Convert(char f);
		Convert(std::string f);
		Convert( Convert const & src );
		~Convert();

		Convert &		operator=( Convert const & rhs );
		double getValue(void) const;
		void getValues(void);
		float getValuef(void) const;
		int getValuei(void) const;
		char getValuec(void) const;
		operator int(void);
		operator float(void);
		operator double(void);
	private:
		std::string _type;
		bool _spec;
		bool _f;
		std::string _input;
		float _valuef;
		int _valuei;
		double _valued;
		char _valuec;

};

std::ostream &			operator<<( std::ostream & o, Convert const  );

#endif /* ********************************************************* CONVERT_H */
