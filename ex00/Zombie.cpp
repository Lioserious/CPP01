/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:52:33 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/06 14:19:22 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << name << " erstellt" << std::endl;
}
//deconstructor
Zombie::~Zombie(void)
{
    std::cout << name << " zerstoerrt" << std::endl;
}