/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:01:14 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/27 18:11:52 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[3;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Animal
{

	public:

		Animal();
		Animal(std::string name);
		Animal(Animal const &src);
		virtual ~Animal();

		virtual Animal &	operator=( Animal const & rhs );
		virtual void makeSound();
		std::string getType();
		void setType(std::string type);
		virtual void setIdea(std::string idea);
		virtual std::string getIdea(int j);
		int i;
	protected:
		std::string type;
		Brain *brain;
};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */
