/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:12:04 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 12:02:15 by mprofett         ###   ########.fr       */
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
		virtual ~Animal();

		Animal					&operator=(const Animal &copy);
		virtual void			makeSound() const;
		virtual std::string		getType() const;
		void					setType(std::string type);

	protected:
		std::string	_type;
};

#endif
