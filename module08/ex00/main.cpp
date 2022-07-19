/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:27:19 by ahhammou          #+#    #+#             */
/*   Updated: 2022/07/14 14:27:41 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Templates.hpp"

int main()
{
	std::vector<int> nums(5);
	std::list<int> numsl(5);
	// numsl = {1, 2, 3, 4, 5};
	std::deque<int> numsd(5);
	// numsd ;
	// std::deque<int> numd(5);
	for (int i = 0; i < 5; i++)
	{
		nums[i] = i;
	}
	for (int i = 1; i < 6; i++)
	{
		numsl.push_front(i);
	}
	for (int i = 0; i < 5; i++)
	{
		numsd[i] = i;
	}
	try{
		easyFind(nums, 5);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		easyFind(numsl, 5);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		easyFind(numsd, 5);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
