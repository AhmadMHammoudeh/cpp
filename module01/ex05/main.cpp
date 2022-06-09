/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:44:51 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/09 06:15:42 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argv, char **argc)
{
	Harl h;
	if (argv != 2)
		std::cout << "\033[0;35m Wrong number of args!" << std::endl;
	else{
		h.complain(argc[1]);
	}
}
