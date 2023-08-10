/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:29:30 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/09 12:13:07 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	int		n = 6;
	Animal	*my_animal_array[n];

	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
			my_animal_array[i] = new Dog();
		else
			my_animal_array[i] = new Cat();
	}
	for (int i = 0; i < n; i++)
	{
		delete my_animal_array[i];
	}
	return (0);
}
