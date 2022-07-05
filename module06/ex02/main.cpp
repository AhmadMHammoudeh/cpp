/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:46:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/07/05 15:07:11 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Classes.hpp"

void	identify(Base *base)
{
	ClassA *a;
	ClassB *b;
	ClassC *c;
	a = dynamic_cast<ClassA *>(base);
	b = dynamic_cast<ClassB *>(base);
	c = dynamic_cast<ClassC *>(base);
	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base &base)
{
	ClassA a;
	ClassB b;
	ClassC c;
	try
	{
		a = dynamic_cast<ClassA &>(base);
		std::cout << "A"<< std::endl;
	}
	catch(std::exception err)
	{
	}
	try
	{
		b = dynamic_cast<ClassB &>(base);
		std::cout << "B" << std::endl;
	}
	catch (std::exception err)
	{
	}
	try
	{
		c = dynamic_cast<ClassC &>(base);
		std::cout << "C" << std::endl;
	}
	catch (std::exception err)
	{
	}
}

Base *generate(void)
{
	time_t now = time(0);
	if (now % 3 == 0)
		// std::cout << "A" << std::endl;
	{
		ClassA *a = new ClassA();
		return (a);
	}
	else if (now % 3 == 1)
	{
		ClassC *c = new ClassC();
		return (c);
	}
	else
	{
		ClassB *b = new ClassB();
		return (b);
	}
}

int main()
{
	Base *base;
	base = generate();
	identify(base);
	identify(*base);
	delete (base);
}
