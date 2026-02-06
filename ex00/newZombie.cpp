/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:59:45 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/06 14:49:46 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
1. `new Zombie(name)` erstellt einen Zombie **auf dem Heap**
2. Ruft den Constructor mit `name` auf
3. Gibt die **Adresse** des neuen Zombies zurück
4. Diese Adresse wird in `zombie` gespeichert
*/
Zombie* newZombie(std::string name)
{
    Zombie* zombie = new Zombie(name);
    return zombie;
}

