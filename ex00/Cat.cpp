/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:26:08 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/08 11:40:04 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : _type("Cat")
{
	std::cout << "An Cat has been created with the type: " << _type << std::endl;
}

Cat::Cat(const Cat &copy) : _type(copy._type)
{
	std::cout << "An Cat has been created with the type: " << _type << std::endl;
}

Cat::~Cat()
{
	std::cout << "An Cat has been destroyed. It has the type: " << _type << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	this->_type = copy._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaw Miaw !" << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}
