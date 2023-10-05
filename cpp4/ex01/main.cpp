/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:00:07 by louisa            #+#    #+#             */
/*   Updated: 2023/10/05 13:35:53 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << std::endl << "*----------- Constructors ------------*" << std::endl << std::endl;
	
	const Animal* meta[] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
	
	std::cout << std::endl << "*----------- Animal Sounds -----------*" << std::endl << std::endl;
	
	for (int i=0; i<6; ++i)
		meta[i]->makeSound();

	std::cout << std::endl << "*------------ Destructors --------------*" << std::endl << std::endl;
	for (int i=0; i<6; ++i)
	{
		delete meta[i];
		std::cout << "Animal " << i << " was deleted" << std::endl;
	}
	
	return (0);
}