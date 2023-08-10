/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:46:47 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 12:14:51 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

void	Brain::fill_brain_ideas(std::string ideas)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = ideas;
	}
}

Brain::Brain()
{
	std::cout << "A Brain has been created by defaut with random ideas" << std::endl;
	this->fill_brain_ideas("random idea");
}

Brain::Brain(std::string ideas)
{
	std::cout << "A Brain has been created with the ideas: " << ideas << std::endl;
	this->fill_brain_ideas(ideas);
}

Brain::Brain(const Brain &copy)
{
	std::cout << "A Brain has been created by copy" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = copy._ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "A Brain has been destroyed." << std::endl;
}

Brain	&Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}
