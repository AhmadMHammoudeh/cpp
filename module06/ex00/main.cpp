/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:46:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/29 10:57:51 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <limits>

int main(int argv, char **argc)
{
	if (argv == 2)
	{
		std::string str = argc[1];
		float t = std::atof(str.c_str());
		std::cout << t << std::endl;
		// Convert c1;
		Convert c2(t);
		// Convert c3(3.14);
		// Convert c4(3);
		// Convert c5 = c2;
		c2.getValues();
		// c2.~Convert();
		// c5.~Convert();
		// str.~basic_string();
		// delete (&t);
		// std::cout << c2.getValue() << std::endl;
		// std::cout << c2.getValuei() << std::endl;
		// std::cout << c2.getValue() << ".0f"<< std::endl;
		// if (!c2.getValuec())
		// 	std::cout << "Non Displayable Character" << std::endl;
		// else
		// 	std::cout << c2.getValuec() << std::endl;
		// std::cout << c2.getValue() << std::endl;
		// std::cout << c3.getValue() << std::endl;
		// std::cout << c4.getValue() << std::endl;
		// std::cout << c5.getValue() << std::endl;
	}
	return (0);
}
