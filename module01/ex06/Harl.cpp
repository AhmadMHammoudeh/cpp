/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 06:31:11 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/09 06:18:32 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "\033[1;33m[ DEBUG ]" << std::endl;
	std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	Harl::info();
}

void	Harl::info(void)
{
	std::cout << "\033[1;32m[ INFO ]" << std::endl;
	std::cout<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	Harl::warning();
}

void	Harl::warning(void)
{
	std::cout << "\033[1;34m[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	Harl::error();
}

void	Harl::error(void)
{
	std::cout << "\033[1;35m[ ERROR ]" << std::endl;
	std::cout<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*levels[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (lvls[i] == level)
			return (this->*(levels[i]))();
	std::cout << "\033[3;31m[ Probably complaining about insignificant problems ]" << std::endl;
}
