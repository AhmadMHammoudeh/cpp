/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:27:19 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/30 14:31:39 by ahhammou         ###   ########.fr       */
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
	std::cout << arr2.arr[0] << std::endl;
	std::cout << arr2.arr[1] << std::endl;
	std::cout << arr2.arr[6] << std::endl;
	
	Array<char> arr3(arr2);
	std::cout << arr3.arr[0] << std::endl;
	std::cout << arr3[2] << std::endl;
	std::cout << arr3.arr[1] << std::endl;
	std::cout << arr3.arr[6] << std::endl;
	
	Array<char> arr4=arr2;
	std::cout << arr4.arr[0] << std::endl;
	std::cout << arr4[2] << std::endl;
	std::cout << arr4.arr[1] << std::endl;
	std::cout << arr4.arr[6] << std::endl;
}
