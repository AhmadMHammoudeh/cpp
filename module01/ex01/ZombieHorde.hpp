/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:21 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/25 01:53:26 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <cctype>
#include "Zombie.hpp"

class ZombieHorde
{
	private:
	std::string name;
	int size;
	Zombie *zombies;
	
	public:
	Zombie	*ZombieHord(int N, std::string name);
	void	announce(void);
	void	nameing(std::string name);
	~ZombieHorde(){this->zombies->GetName(); std::cout <<" DIED" << std::endl;};
};


#endif
