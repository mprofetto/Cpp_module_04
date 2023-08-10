/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:08:55 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/10 11:42:25 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		// AMateria();
		// AMateria(std::string const &type);
		// AMateria(const AMateria &copy);
		virtual ~AMateria();

		std::string const 	&getType(void) const;
		virtual void		use(ICharacter &target);
		virtual AMateria	*clone(void) const = 0;
};

#endif
