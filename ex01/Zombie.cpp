/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:52:33 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/06 16:09:03 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name) : name(name)
{
    std::cout << name << " erstellt" << std::endl;
}

//Constructor für Arrays
Zombie::Zombie() : name("Unnamed")
{
    std::cout << "Zombie erstellt" << std::endl;
}

//Setter
void Zombie::setName(std::string newName)
{
    name = newName;
}

// Destructor
Zombie::~Zombie(void)
{
    std::cout << name << " zerstoerrt" << std::endl;
}

// Announceement
void Zombie::announcement(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}