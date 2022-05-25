/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 02:09:32 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/25 02:17:38 by ahhammou         ###   ########.fr       */
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
	std::cout << s << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}