/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:25:23 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/24 14:00:53 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <iomanip>
class Contact
{
private:
	std::int16_t	Indexs;
	std::string		Name;
	std::string		Family;
	std::string		NickName;
	std::string		Number;
	std::string		DeepSecret;
public:
	void		Index(int16_t i);
	int16_t		First();
	int16_t		Fam();
	int16_t		Nick();
	int16_t		Numb();
	int16_t		Deep();
	int16_t		GetIndex();
	std::string	GetName();
	std::string	GetFamily();
	std::string	GetNickName();
	std::string	GetNumber();
	std::string	GetDeepSecret();
};

class PhoneBook
{
private:
public:
	Contact contact[8];
	void	AddContact(PhoneBook *book, Contact info, int16_t i);
	void	SearchContact(PhoneBook *book, int16_t j);
	void	PullContact(PhoneBook *book, int16_t j);
	void	Exit();
};


#endif
