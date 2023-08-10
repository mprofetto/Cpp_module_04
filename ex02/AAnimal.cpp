/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:15:24 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 12:02:21 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : _type("no type defined")
{
	std::cout << "An AAnimal has been created with the type: " << _type << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) : _type(copy._type)
{
	std::cout << "An AAnimal has been created with the type: " << _type << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "An AAnimal has been destroyed. It has the type: " << _type << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &copy)
{
	this->_type = copy._type;
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Undefined sound" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}
