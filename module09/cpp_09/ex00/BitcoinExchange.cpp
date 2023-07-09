#include "BitcoinExchange.hpp"



BitcoinExchange::BitcoinExchange(std::string input){
	std::ifstream file("data.csv");
	if (!file.is_open()){
		std::cout << RED << "Data file is missing! "<<std::endl;
		return ;
	}
	while (getline(file, currentLine)){
		getRates(currentLine);
	}
	file.close();
	std::ifstream newData(input);
	if (!newData.is_open()){
		std::cout << RED << "Input file is missing! "<<std::endl;
		return ;
	}
	getline(newData, currentLine);
	while (getline(newData, currentLine)){
		isValidInput(currentLine);
	}

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy){
	*this = copy;

}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy){
	if (this != &copy) {
		this->rates = copy.rates;
		this->inputData = copy.inputData;
		this->currentLine = copy.currentLine;
		this->input = copy.input;
		this->year = copy.year;
		this->month = copy.month;
		this->day = copy.day;
		this->date = copy.date;
		this->rate = copy.rate;

	}
	return (*this);
}
BitcoinExchange::~BitcoinExchange(){

}

template<typename T>
T FromString(const std::string& str)
{
    std::istringstream ss(str);
    T ret;
    ss >> ret;
    return ret;
}

bool BitcoinExchange::isValidInput(std::string line){
	if (line.length() < 14){
		std::cout << "Input invalid! => " << line << std::endl;
		return false;
	}
	std::string temp = line.substr(0, 4);
	year = FromString<int>(temp);
	if(year < 2009 || year > 2023 || (line[4] != '-' || line[7] != '-' || line[11] != '|')){
		std::cout << "Input invalid!" << " Invalid Date" << std::endl;
		return false;
	}
	temp = line.substr(5, 2);
	month = FromString<int>(temp);
	temp = line.substr(8, 2);
	day = FromString<int>(temp);
	if(month < 1 || month > 12 || day < 1 || day > 31){
		std::cout << "Input invalid!" << " Invalid Date" << std::endl;
		return false;
	}
	temp = line.substr(12);
	rate = FromString<double>(temp);
	if(rate < 0){
		std::cout << "Input invalid!" << " Not a positive number" << std::endl;
		return false;
	}
	if(rate > 1000){
		std::cout << "Input invalid!" << " Too large number"<< std::endl;
		return false;
	}
	date=(year*10000)+(month * 100)+day;
	inputData[date]= rate;
	
	if (rates[date] != 0){
		float exchange = rate * rates[date];
		std::cout <<line.substr(0, 10) <<" => "<<inputData[date] << " = " << exchange << std::endl;

	}
	else {
		for(int i = 0; i < 100000; i++ ){
			if (rates[date - i] != 0){
				float exchange = rate * rates[date- i];
				std::cout <<line.substr(0, 10)<< " => " << inputData[date] << " = " << exchange << std::endl;
				return true;
			}		
		}
	}
	return true;
}

bool BitcoinExchange::getRates(std::string line){
	std::string temp = line.substr(0, 4);
	year = FromString<int>(temp);
	temp = line.substr(5, 2);
	month = FromString<int>(temp);
	temp = line.substr(8, 2);
	day = FromString<int>(temp);
	temp = line.substr(11);
	rate = FromString<double>(temp);
	date=(year*10000)+(month * 100)+day;
	rates[date]= rate;
	std::cout << rates[date] << std::endl;
	return true;
}