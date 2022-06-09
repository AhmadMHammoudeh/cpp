/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:21 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/07 06:28:04 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>

class Harl
{
	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	public:
	void complain(std::string level );
};


#endif
