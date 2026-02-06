/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:34:23 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/06 16:46:57 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor
Weapon::Weapon(std::string type) : type(type)
{
    
}

// Getter
const std::string& Weapon::getType() const
{
    return type;
}

// Setter
void Weapon::setType(std::string newType)
{
    type = newType;
}