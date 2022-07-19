/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:27:19 by ahhammou          #+#    #+#             */
/*   Updated: 2022/07/18 14:15:37 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	Span sp2 = Span(10000);
	// sp.addNumber(1);
	try
	{
		sp2.addNumber(100, 10000);
		std::cout << sp2.longestSpan() << std::endl;
		// std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout<< e.what() << std::endl;
	}
	// // try
	// // {
	// // 	// std::cout << sp.longestSpan() << std::endl;
	// // 	std::cout << sp.shortestSpan() << std::endl;
	// // }
	// // catch (std::exception &e){
	// // 	std::cout<< e.what() << std::endl;
	// // }
	// // sp.addNumber(20);
	// // sp.addNumber(30);
	// // sp.addNumber(40);
	// // sp.addNumber(6);
	// sp.addNumber(50);
	// std::cout << sp.longestSpan() << std::endl;
	// std::cout << sp.shortestSpan() << std::endl;
	// Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
// sp.printList();
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
	return 0;
}
