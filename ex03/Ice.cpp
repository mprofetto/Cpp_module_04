/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:40:23 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 14:37:34 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
#include "ICharacter.hpp"

Ice::Ice()
{
	this->_type = "ice";
	return;
}

Ice::Ice(const Ice &copy)
{
	this->_type = copy.getType();
	return;
}

Ice::~Ice()
{
	return;
}

Ice			&Ice::operator=(Ice &copy) const
{
	return (copy);
}

std::string const 	&Ice::getType(void) const
{
	return (this->_type);
}

void	Ice::use(ICharacter &target)
{
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice		*Ice::clone(void) const
{
	Ice	*result = new Ice;

	return (result);
}
