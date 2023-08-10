/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:12:04 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/08 11:40:29 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &copy);
		~Animal();

		Animal				&operator=(const Animal &copy);
		virtual void		makeSound() const;
		virtual std::string		getType() const;

	protected:
		std::string	_type;
};

#endif
