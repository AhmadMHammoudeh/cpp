/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:46:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/07/14 16:39:14 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <limits>

int main(int argv, char **argc)
{
	if (argv == 2)
	{
		std::string type;
		std::string str = argc[1];
		if (strrchr(argc[1], 'f') && (argc[1][0] >= '0' && argc[1][0] <= '9') )
		{
			type = "float";
			float t = std::atof(str.c_str());
			Convert c2(t, type);
			std::cout <<c2.getType() << " : " << c2.getInput() << std::endl;
			c2.getValues();
		}
		else if (strrchr(argc[1], '.') &&  (argc[1][0] >= '0' && argc[1][0] <= '9'))
		{
			type = "double";
			float t = std::atof(str.c_str());
			Convert c2(t, type);
			std::cout <<c2.getType() << " : " << c2.getInput() << std::endl;
			c2.getValues();
		}
		else if(((argc[1][0] >= 'a' && argc[1][0] <= 'z') ||( argc[1][0] >= 'A' && argc[1][0] <= 'Z')) && !argc[1][1])
		{
			char c = argc[1][0];
			type = "char";
			Convert c2(c, type);
			std::cout <<c2.getType() << " : " << c2.getInput() << std::endl;
			c2.getValues();
		}
		else if(((argc[1][0] >= 'a' && argc[1][0] <= 'z') || (argc[1][0] >= 'A' && argc[1][0] <= 'Z')) && argc[1][1])
		{
			Convert c2(argc[1], "string");
			std::cout <<c2.getType() << " : " << c2.getInput() << std::endl;
			c2.getValues();
		}
		else
		{
			int t = std::atoi(str.c_str());
			type = "int";
			Convert c2(t, type);
			std::cout <<c2.getType() << " : " << c2.getInput() << std::endl;
			c2.getValues();
		}
	}
	return (0);
}
