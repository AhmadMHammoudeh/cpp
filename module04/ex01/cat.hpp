/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahhammou <ahhammou@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:01:14 by ahhammou          #+#    #+#             */
/*   Updated: 2022/06/23 17:22:05 by ahhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[3;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Cat : public Animal
{

	public:

		Cat();
		Cat(std::string name);
		Cat( Cat const & src );
		~Cat();

		Cat &		operator=( Cat const & rhs );
		virtual void makeSound();
		virtual void setIdea(std::string idea);
		virtual std::string getIdea(int j);
		int i = 0;
	private:
		Brain *brain;
};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ********************************************************** ANIMAL_H */