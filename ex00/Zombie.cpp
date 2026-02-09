/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:52:33 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/09 14:17:55 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << name << " erstellt" << std::endl;
}

//deconstructor
Zombie::~Zombie(void)
{
    std::cout << _name << " zerstoerrt" << std::endl;
}

void Zombie::announcement(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
