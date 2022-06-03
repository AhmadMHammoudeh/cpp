/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:03:21 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/02 17:08:02 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>

class Sedder
{
	private:
	std::string	file;
	std::string	s1;
	std::string	s2;
	std::ifstream in;
	std::ofstream out;
	
	public:
	int readFile(std::string &infile);
	int writeFile(std::string &outfile);
	void	replace(std::string &file, std::string &s1, std::string &s2);
};


#endif
