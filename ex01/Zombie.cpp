/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:52:33 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/09 14:22:21 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << name << " erstellt" << std::endl;
}

//Constructor für Arrays
Zombie::Zombie() : _name("Unnamed")
{
    std::cout << "Zombie erstellt" << std::endl;
}

//Setter
void Zombie::setName(std::string newName)
{
    _name = newName;
}

// Destructor
Zombie::~Zombie(void)
{
    std::cout << _name << " zerstoerrt" << std::endl;
}

// Announceement
void Zombie::announcement(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}