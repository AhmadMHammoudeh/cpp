/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:44:51 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/07 06:52:41 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argv, char **argc)
{
	Harl h;
	if (argv != 2)
		std::cout << "Wrong number of args!" << std::endl;
	else{
		h.complain(argc[1]);
	}
}
