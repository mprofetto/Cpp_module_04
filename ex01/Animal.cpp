/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:15:24 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 12:02:21 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("no type defined")
{
	std::cout << "An Animal has been created with the type: " << _type << std::endl;
}

Animal::Animal(const Animal &copy) : _type(copy._type)
{
	std::cout << "An Animal has been created with the type: " << _type << std::endl;
}

Animal::~Animal()
{
	std::cout << "An Animal has been destroyed. It has the type: " << _type << std::endl;
}

Animal	&Animal::operator=(const Animal &copy)
{
	this->_type = copy._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Undefined sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}
