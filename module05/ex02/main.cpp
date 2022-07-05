/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:10:29 by ahhammou          #+#    #+#             */
/*   Updated: 2022/07/05 00:23:11 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try{
	Bureaucrat *a = new Bureaucrat("Ahmad", 20);
	Bureaucrat b = Bureaucrat("Ahmad", 10);

	std::cout << *a << std::endl;
	std::cout << b << std::endl;
	std::cout << a->getName() << std::endl;
	std::cout << a->getGrade() << std::endl;
	a->decreGrade();
	std::cout << a->getGrade() << std::endl;
	a->increGrade();
	std::cout << a->getGrade() << std::endl;
	// b.increGrade();
	std::cout << b.getGrade() << std::endl;
	// b.decreGrade();
	// std::cout << b.getGrade() << std::endl;

	// PresidentialPardonForm j= PresidentialPardonForm("New");
	// j.execute(b);
	// RobotomyRequestForm d= RobotomyRequestForm("New");
	// d.execute(b);
	ShrubberyCreationForm n = ShrubberyCreationForm("New");
	// n.execute(b);
	n.beSigned(b);
	a->signForm(n);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}