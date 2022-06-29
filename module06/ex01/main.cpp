/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:46:13 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/29 11:00:38 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t ptr)
{
	return (reinterpret_cast<Data *>(ptr));
}

int main(int argv, char *argc[])
{
	uintptr_t u;
	Data *d = new Data;
	Data *t = new Data;
	Data *r;
	d->d = 10.0;
	d->i = 20;
	d->j = 10.5f;
	d->str = "Ahmad is the greatest";
	u = serialize(d);
	r = deserialize(u);
	std::cout << r->d << std::endl;
	std::cout << r->i << std::endl;
	std::cout << r->j << std::endl;
	std::cout << r->str << std::endl;
	delete (d);
	delete (t);
}
