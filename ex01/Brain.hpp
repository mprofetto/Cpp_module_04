/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:44:57 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 12:14:46 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
		Brain();
		Brain(std::string default_idea);
		Brain(const Brain &copy);
		~Brain();

		Brain		&operator=(const Brain &copy);
		void		fill_brain_ideas(std::string ideas);

	protected:
		std::string	_ideas[100];
};

#endif
