/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:26:08 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 12:13:34 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	this->setType("Cat");
	this->_brain = new Brain(this->getType());
	std::cout << "An Cat has been created with the type " << this->getType() << std::endl;
}

Cat::Cat(const Cat &copy)
{
	this->setType(copy.getType());
	this->_brain = new Brain(this->getType());
	std::cout << "An Cat has been created by copy with the type " << this->getType() << std::endl;
}

Cat::~Cat()
{
	std::cout << "An Cat has been destroyed. It has the type: " << this->getType()<< std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(const Cat &copy)
{
	this->_type = copy._type;
	delete this->_brain;
	this->_brain = new Brain(*copy._brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaw Miaw !" << std::endl;
}
