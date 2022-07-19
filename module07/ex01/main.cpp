/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:27:19 by ahhammou          #+#    #+#             */
/*   Updated: 2022/07/17 18:05:27 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Templates.hpp"

// int main()
// {
// 	int str[] = {1,2,3,4};
// 	char strs[] = "Testing";
// 	iter(str, 4, fun);
// 	iter(strs, strlen(strs), fun);
// 	return 0;
// }


int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];
iter( tab, 5, print );
iter( tab2, 5, print );
return 0;
}
