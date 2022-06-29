/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:01:14 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/27 17:16:34 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"
# include "Animal.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[3;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Dog : public Animal
{

	public:

		Dog();
		Dog(std::string name);
		Dog( Dog const & src );
		~Dog();

		Dog &		operator=( Dog const & rhs );
		virtual void makeSound();
		virtual void setIdea(std::string idea);
		virtual std::string getIdea(int j);
		int i ;
	private:
		Brain *brain;
};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ********************************************************** ANIMAL_H */
