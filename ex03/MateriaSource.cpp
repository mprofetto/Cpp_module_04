/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:47:27 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/10 14:00:38 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->_memory_slots[i] = 0;
		this->_memory[i] = NULL;
	}
	return;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_memory[i];
		this->_memory_slots[i] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		if (copy._memory_slots[i] == 1)
		{
			this->_memory[i] = copy._memory[i]->clone();
			this->_memory_slots[i] = 1;
		}
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_memory[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_memory[i];
		this->_memory_slots[i] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		if (copy._memory_slots[i] == 1)
		{
			this->_memory[i] = copy._memory[i]->clone();
			this->_memory_slots[i] = 1;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory_slots[i] == 0)
		{
			this->_memory_slots[i] = 1;
			this->_memory[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory_slots[i] == 1 && this->_memory[i]->getType().compare(type))
			return (this->_memory[i]->clone());
	}
	return (NULL);
}
