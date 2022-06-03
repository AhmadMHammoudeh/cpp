/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:44:51 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/03 02:02:33 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

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
	if (out.is_open())
		std::cout << "is open";
	out << final;
	std::cout << s1;
	std::cout << s2;
	this->in.close();
	this->out.close();
}

int main(int argv, char **argc)
{
	if (argv != 4)
		std::cout << "Wrong number of args!" << std::endl;
	else{
	std::string file(argc[1]);
	std::string s1(argc[2]);
	std::string s2(argc[3]);
	Sedder rep;
	rep.replace(file, s1, s2);
	}
}