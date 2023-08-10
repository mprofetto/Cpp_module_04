/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:28:56 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/08 11:39:53 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : _type("WrongCat")
{
	std::cout << "An WrongCat has been created with the type: " << _type << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : _type(copy._type)
{
	std::cout << "An WrongCat has been created with the type: " << _type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "An WrongCat has been destroyed. It has the type: " << _type << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	this->_type = copy._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaw Miaw !" << std::endl;
}

std::string	WrongCat::getType(void) const
{
	return (this->_type);
}
