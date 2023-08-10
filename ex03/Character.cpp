/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:48:30 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/10 11:41:46 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("unknown character")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory_slots[i] = 0;
		this->_inventory[i] = NULL;
	}
	return;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory_slots[i] = 0;
		this->_inventory[i] = NULL;
	}
	return;
}

Character::Character(const Character &copy)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory_slots[i] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory_slots[i] == 1)
		{
			this->_inventory[i] = copy._inventory[i]->clone();
			this->_inventory_slots[i] = 1;
		}
	}
	this->_name = copy._name;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
	}
}

Character	&Character::operator=(const Character &copy)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
		this->_inventory_slots[i] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory_slots[i] == 1)
		{
			this->_inventory[i] = copy._inventory[i]->clone();
			this->_inventory_slots[i] = 1;
		}
	}
	this->_name = copy._name;
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory_slots[i] == 0)
		{
			this->_inventory_slots[i] = 1;
			this->_inventory[i] = m;
			return;
		}
	}
}

void	Character::unequip(int idx)
{
	if ((idx >= 0 && idx <= 3) && this->_inventory_slots[idx] == 1)
	{
		this->_inventory_slots[idx] = 0;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx <= 3) && this->_inventory_slots[idx] == 1)
		this->_inventory[idx]->use(target);
}
