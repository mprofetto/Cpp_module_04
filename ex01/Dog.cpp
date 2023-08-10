/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:24:03 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 12:13:29 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	this->setType("Dog");
	this->_brain = new Brain(this->getType());
	std::cout << "An Dog has been created with the type: " << this->getType() << std::endl;
}

Dog::Dog(const Dog &copy)
{
	this->setType(copy.getType());
	this->_brain = new Brain(this->getType());
	std::cout << "An Dog has been created by copy with the type: " << this->getType() << std::endl;
}

Dog::~Dog()
{
	std::cout << "An Dog has been destroyed. It has the type: " << this->getType() << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(const Dog &copy)
{
	this->_type = copy._type;
	delete this->_brain;
	this->_brain = new Brain(*copy._brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof !" << std::endl;
}
