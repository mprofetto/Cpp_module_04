/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:40:45 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/10 11:42:28 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;
class ICharacter;

class Character : public ICharacter
{
	private:
		std::string	_name;
		int			_inventory_slots[4];
		AMateria	*_inventory[4];

	public:
		Character();
		Character(std::string name);
		Character(const Character &copy);
		virtual ~Character();

		Character					&operator=(const Character &copy);
		virtual std::string const	&getName() const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
};

#endif
