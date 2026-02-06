/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:19:33 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/06 15:29:38 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	//Allocate array
	Zombie* horde = new Zombie[N];

	//initialize zombies
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	// Return pointer to first zombie
	return horde;
}