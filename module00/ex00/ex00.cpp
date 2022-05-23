/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:02:43 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/07 16:50:32 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argv, char **argc)
{
	std::string s;
	if (argv < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else{
		for (int j = 1; argc[j]; j++)
			for (int i = 0; argc[j][i]; i++)
				std::cout << (char)toupper(argc[j][i]);
		std::cout << std::endl;
		}
}