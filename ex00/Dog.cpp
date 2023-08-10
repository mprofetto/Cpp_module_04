/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:24:03 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/08 11:39:59 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : _type("Dog")
{
	std::cout << "An Dog has been created with the type: " << _type << std::endl;
}

Dog::Dog(const Dog &copy) : _type(copy._type)
{
	std::cout << "An Dog has been created with the type: " << _type << std::endl;
}

Dog::~Dog()
{
	std::cout << "An Dog has been destroyed. It has the type: " << _type << std::endl;
}

Dog	&Dog::operator=(const Dog &copy)
{
	this->_type = copy._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof !" << std::endl;
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}
