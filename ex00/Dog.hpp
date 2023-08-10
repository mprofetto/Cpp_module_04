/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:23:17 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/08 11:41:09 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		Dog					&operator=(const Dog &copy);
		virtual void		makeSound() const;
		virtual std::string	getType() const;

	protected:
		std::string	_type;
};

#endif
