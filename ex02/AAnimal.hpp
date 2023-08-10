/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:12:04 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 12:16:51 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		virtual ~AAnimal();

		AAnimal					&operator=(const AAnimal &copy);
		virtual void			makeSound() const = 0;
		virtual std::string		getType() const;
		void					setType(std::string type);

	protected:
		std::string	_type;
};

#endif
