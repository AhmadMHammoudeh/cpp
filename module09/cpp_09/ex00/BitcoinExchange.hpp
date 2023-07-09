#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
#include <sstream>
# include <string>
# define RED "\033[0;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[3;36m"
# define YELLOW "\033[1;33m"
# define RESET "\033[0m"

class BitcoinExchange {
	private:
		std::map<int, double> rates;
		std::map<int, double> inputData;
		std::string currentLine;
		std::string input;
		int year;
		int month;
		int day;
		int date;
		double rate;
	
	public:
		BitcoinExchange(std::string input);
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();

		bool isValidInput(std::string line);
		bool getRates(std::string line);





};

#endif
