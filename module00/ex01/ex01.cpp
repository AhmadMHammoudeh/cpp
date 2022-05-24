/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:31:40 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/24 19:22:40 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

std::string truncate(std::string str)
{
    if (str.length() > 9)
		return str.substr(0, 9) + ".";
	else
		return str.substr(0, 10);
    return str;
}

void	Contact::Index(int16_t i){
	this->Indexs = i;
}

std::int16_t	Contact::GetIndex(){
	return(this->Indexs);
}

std::string	Contact::GetName(){
	return(truncate(this->Name));
}

std::string	Contact::GetFamily(){
	return(truncate(Family));
}

std::string	Contact::GetNickName(){
	return(truncate(this->NickName));
}

std::string	Contact::GetNumber(){
	return(truncate(this->Number));
}

std::string	Contact::GetDeepSecret(){
	return(truncate(this->DeepSecret));
}

int16_t	Contact::First(){
	std::string s;
	std::cout << "Write Your Name"  << std::endl;
	getline(std::cin, s);
	if (s.empty())
		return (-1);
	this->Name = s;
	return (0);
}

int16_t	Contact::Fam(){
	std::string s;
	std::cout << "Write Your Family Name"  << std::endl;
	getline(std::cin, s);
	if (s.empty())
		return (-1);
	this->Family = s;
	return (0);
}

int16_t	Contact::Nick(){
	std::string s;
	std::cout << "Write Your NickName"  << std::endl;
	getline(std::cin, s);
	if (s.empty())
		return (-1);
	this->NickName = s;
	return (0);
}

int16_t	Contact::Numb(){
	std::string s;
	std::cout << "Write Your Number"  << std::endl;
	getline(std::cin, s);
	if (s.empty())
		return (-1);
	this->Number = s;
	return (0);
}

int16_t	Contact::Deep(){
	std::string s;
	std::cout << "Write Your Deepest Secret"  << std::endl;
	getline(std::cin, s);
	if (s.empty())
		return (-1);
	this->DeepSecret = s;
	return (0);
}

void	PhoneBook::AddContact(PhoneBook *book, Contact info, int16_t i){
	book->contact[i] = info;
}

int8_t	Add(PhoneBook *book, int16_t i){
	Contact add;
	int16_t j;

	j = 0;
	add.Index(i);
	j += add.First();
	j += add.Fam();
	j += add.Nick();
	j += add.Numb();
	j += add.Deep();
	if (j < 0)
		return (0);
	book->AddContact(book, add, i);
	return (1);
}

void	PhoneBook::PullContact(PhoneBook *book, int16_t i){
		std::cout << "INDEX: " << book->contact[i].GetIndex() << std::endl;
		std::cout << "NAME: " << book->contact[i].GetName() << std::endl;
		std::cout << "FAMILY NAME: " << book->contact[i].GetFamily() << std::endl;
		std::cout << "NICKNAME: " << book->contact[i].GetNickName() << std::endl;
		std::cout << "NUMBER: " << book->contact[i].GetNumber() << std::endl;
		std::cout << "DEEPSECRET: " << book->contact[i].GetDeepSecret() << std::endl;
}

void	PhoneBook::SearchContact(PhoneBook *book, int16_t j){
		int i = 0;
		while (i < j){
			std::cout << std::setw(10);
			std::cout << book->contact[i].GetIndex() << '|';
			std::cout << std::setw(10);
			std::cout << book->contact[i].GetName() << '|';
			std::cout << std::setw(10);
			std::cout << book->contact[i].GetFamily() << '|';
			std::cout << std::setw(10);
			std::cout << book->contact[i].GetNickName() << '|';
			std::cout << std::setw(10);
			std::cout << book->contact[i].GetNumber() << '|';
			std::cout << std::setw(10);
			std::cout << book->contact[i].GetDeepSecret() << '|';
			std::cout << std::endl;
			i++;
		}
}

int8_t	Search(PhoneBook *book, int16_t j){
	std::string s;
	int16_t i = -1;
	
	if (j > 8)
		j = 8;
	if (j == 0)
		return (0);
	book->SearchContact(book, j);
	std::cout << "Please enter the index of the contact you wish to display: "  << std::endl;
	getline(std::cin, s);
	if (std::cin.eof())
	{
		std::cout << "CTR + D" << std::endl;
		return (0);
	}
	else if (s.size() > 1 || s.size() < 0)
		std::cout<< "Wrong Index" << std::endl;
	else if (!isnumber(s[0]))
			std::cout<< "Wrong Index" << std::endl;
	i = atoi(s.c_str());
	if (i < j && i >= 0 && i < 8)
		book->PullContact(book, i);
	else
		std::cout << "Invalid Index" << std::endl;
	return (1);
}

int main()
{
	PhoneBook *book;
	std::string s;
	int16_t i = 0;
	int16_t j = 0;
	int16_t c = 0;
	book = new PhoneBook;
	
	while (getline(std::cin, s))
	{
		c = 0;
		if (i == 8)
			i = 0;
		if (s == "ADD"){
			c = Add(book, i);
			if (c == 1)
			{
				i++;
				j++;
			}
		}
		if (s == "SEARCH"){
			(Search(book, j));
		}
		if (s == "EXIT")
			return (0);
	}
}
