/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:10:29 by ahhammou          #+#    #+#             */
/*   Updated: 2022/07/01 16:30:37 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try{
	Bureaucrat *a = new Bureaucrat("Ahmad", 10);
	Bureaucrat b = Bureaucrat("Ahmad", 1);

	std::cout << *a << std::endl;
	std::cout << b << std::endl;
	std::cout << a->getName() << std::endl;
	std::cout << a->getGrade() << std::endl;
	a->decreGrade();
	std::cout << a->getGrade() << std::endl;
	a->increGrade();
	std::cout << a->getGrade() << std::endl;
	b.increGrade();
	std::cout << b.getGrade() << std::endl;
	b.decreGrade();
	std::cout << b.getGrade() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
