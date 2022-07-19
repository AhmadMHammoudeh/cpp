/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:27:19 by ahhammou          #+#    #+#             */
/*   Updated: 2022/07/17 18:46:11 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<char> arr= Array<char>();
	std::cout << arr.arr[0] << std::endl;
	std::cout << arr.arr[1] << std::endl;
	std::cout << arr.arr[6] << std::endl;
	
	Array<char> arr2(3);
	std::cout << arr2.size() << std::endl;
	arr2.arr[0] = 'a';
	arr2.arr[1] = 'b';
	arr2.arr[2] = 'c';
	arr2.arr[3] = 'd';
	std::cout << arr2.arr[0] << std::endl;
	std::cout << arr2.arr[1] << std::endl;
	std::cout << arr2.arr[6] << std::endl;
	
	Array<char> arr3(arr2);
	std::cout << arr3.arr[0] << std::endl;
	std::cout << arr3[2] << std::endl;
	std::cout << arr3.arr[1] << std::endl;
	std::cout << arr3.arr[6] << std::endl;
	
	Array<char> arr4=arr2;
	std::cout << arr4[0] << std::endl;
	std::cout << arr4.arr[2] << std::endl;
	std::cout << arr4.arr[1] << std::endl;
	std::cout << arr4.arr[6] << std::endl;
}
