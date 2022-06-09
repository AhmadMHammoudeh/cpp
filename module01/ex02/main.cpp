/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:09:32 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/09 06:02:38 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::string *stringPTR;
	std::string &stringREF = s;
	s = "HI THIS IS BRAIN"; 
	stringPTR = &s;
	std::cout << "\033[1;33mThis is S"<<std::endl;
	std::cout << s << std::endl;
	std::cout << "\033[1;34mThis is S PTR"<<std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "\033[1;35mThis is S Ref"<<std::endl;
	std::cout << stringREF << std::endl;
}
