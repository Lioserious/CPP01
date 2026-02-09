/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:34:16 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/09 15:16:39 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor - weapon starts as NULL
HumanB::HumanB(std::string name) 
    : name(name), weapon(NULL)
{
    
}

// Setter
void HumanB::setWeapon(Weapon& weapon)
{
    // Speichert Adresse der Waffe
    this->weapon = &weapon;  
}

// Attack
void HumanB::attack()
{
    
    if (weapon)
    {
        std::cout << name << " attacks with their " 
                  << weapon->getType() << std::endl;
    }
    else
    {
        std::cout << name << " has no weapon!" << std::endl;
    }
}