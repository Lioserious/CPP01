/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:34:10 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/06 16:49:04 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor mit Initializer List
HumanA::HumanA(std::string name, Weapon& weapon) 
    : name(name), weapon(weapon)
{
    
}

// Attack
void HumanA::attack()
{
    std::cout << name << " attacks with their " 
              << weapon.getType() << std::endl;
}