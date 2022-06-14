/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 06:31:11 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/13 13:43:42 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "\033[1;33m[ DEBUG ]" << std::endl;
	std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\033[1;32m[ INFO ]" << std::endl;
	std::cout<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\033[1;34m[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\033[1;35m[ ERROR ]" << std::endl;
	std::cout<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int j = 4;
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (lvls[i] == level)
		{
			j = i;
			break;
		}
	switch (j)
	{
	case 0:
		Harl::debug();
		Harl::info();
		Harl::warning();
		Harl::error();
		break;
	case 1:
		Harl::info();
		Harl::warning();
		Harl::error();
		break;
	case 2:
		Harl::warning();
		Harl::error();
		break;
	case 3:
		Harl::error();
		break;
	
	default:
		std::cout << "\033[3;31m[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
