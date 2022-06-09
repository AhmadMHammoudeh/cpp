/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:44:51 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/09 06:05:17 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string the_replacer(std::string str, std::string s1, std::string s2)
{
	size_t found = str.find(s1.c_str());
	while (found != std::string::npos)
	{
		str.erase(found, s1.length());
		str.insert(found, s2);
		found = str.find(s1.c_str(), found + 1);
	}
	return (str);
}

void	Sedder::replace(std::string &file, std::string &s1, std::string &s2)
{
	std::string replacename;
	std::string replacedot = ".replace";
	std::string ss;
	std::string final;
	
	replacename = (file + replacedot).c_str();
	in.open(file.c_str());
	if (!in.is_open())
	{
		std::cout << "File Couldnt be Opened !" << std::endl;
		return;
	}
	while (in.is_open())
	{
		std::getline(in, ss);
		final.append(ss);
		if (!in.eof())
			final.append("\n");
		else
			break ;
	}
	out.open(replacename.c_str());
	final = the_replacer(final, s1, s2);
	out << final;
	this->in.close();
	this->out.close();
}

int main(int argv, char **argc)
{
	if (argv != 4)
		std::cout << "\033[0;35m Wrong number of args!" << std::endl;
	else{
	std::string file(argc[1]);
	std::string s1(argc[2]);
	std::string s2(argc[3]);
	Sedder rep;
	try{
		rep.replace(file, s1, s2);
	}
	catch(std::exception err)
	{
		std::cout << "S1 not found" << std::endl;
	}
	}
}
