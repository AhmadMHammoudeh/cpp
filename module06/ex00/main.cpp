/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:46:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/25 18:00:23 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argv, char *argc[])
{
	Convert c1;
	Convert c2("+ds");
	Convert c3(3.14);
	Convert c4(3);
	Convert c5 = c3;
	c2.getValues();
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
	return (0);
}