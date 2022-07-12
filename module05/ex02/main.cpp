/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:10:29 by ahhammou          #+#    #+#             */
/*   Updated: 2022/07/06 19:54:23 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat *a = new Bureaucrat("Ahmad", 20);
	try{
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

	PresidentialPardonForm j= PresidentialPardonForm("New");
	RobotomyRequestForm d= RobotomyRequestForm("New");
	ShrubberyCreationForm n = ShrubberyCreationForm("New");
	// n.execute(b);
	n.beSigned(b);
	a->signForm(n);
	j.beSigned(b);
	a->signForm(j);
	d.beSigned(b);
	a->signForm(d);
	j.execute(b);
	d.execute(b);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete (a);
}
