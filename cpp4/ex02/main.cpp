/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:00:07 by louisa            #+#    #+#             */
/*   Updated: 2023/10/04 15:39:47 by lboudjem         ###   ########.fr       */
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
	
	// const Animal* meta = new Animal(); // abstract class
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl << "*----------- Animal Sounds -----------*" << std::endl << std::endl;
	
	std::cout << i->getType() << " sound: ";
	i->makeSound();
	std::cout << j->getType() << " sound: ";
	j->makeSound();
	// std::cout << meta->getType() << " sound: ";
	// meta->makeSound();
	
	std::cout << std::endl << "*------------ Destructors --------------*" << std::endl << std::endl;
	// delete meta;
	delete i;
	delete j;
	
	return (0);
}