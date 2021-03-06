/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:21 by ahhammou          #+#    #+#             */
/*   Updated: 2022/05/25 01:51:56 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cctype>

class Zombie
{
	private:
	std::string name;
	public:
	void	Announce(void);
	void	GetName(void);
	void	Nameing(std::string name);
	~Zombie(){std::cout << this->name << " DIED" << std::endl;};
};


#endif
