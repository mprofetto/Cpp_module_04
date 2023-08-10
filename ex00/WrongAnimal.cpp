/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:27:53 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/08 11:28:03 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("no type defined")
{
	std::cout << "An WrongAnimal has been created with the type: " << _type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : _type(copy._type)
{
	std::cout << "An WrongAnimal has been created with the type: " << _type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "An WrongAnimal has been destroyed. It has the type: " << _type << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->_type = copy._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Undefined sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
