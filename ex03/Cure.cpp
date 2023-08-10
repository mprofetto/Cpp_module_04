/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:39:04 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 14:39:42 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>
#include "ICharacter.hpp"

Cure::Cure()
{
	this->_type = "Cure";
	return;
}

Cure::Cure(const Cure &copy)
{
	this->_type = copy.getType();
	return;
}

Cure::~Cure()
{
	return;
}

Cure			&Cure::operator=(Cure &copy) const
{
	return (copy);
}

std::string const 	&Cure::getType(void) const
{
	return (this->_type);
}

void	Cure::use(ICharacter &target)
{
		std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

Cure		*Cure::clone(void) const
{
	Cure	*result = new Cure;

	return (result);
}
