/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:18:01 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 15:26:16 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include "Character.hpp"

// AMateria::AMateria() : _type("")
// {
// 	return;
// }

// AMateria::AMateria(std::string const &type) : _type(type)
// {
// 	return;
// }

// AMateria::AMateria(const AMateria &copy) : _type(copy.getType())
// {
// 	return;
// }

AMateria::~AMateria()
{
	return;
}

std::string const 	&AMateria::getType(void) const
{
	return (this->_type);
}

void		AMateria::use(ICharacter &target)
{
		std::cout << "Materia is used on" << target.getName() << std::endl;
}
