/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:19:33 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/09 14:21:58 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string _name)
{
	//Allocate array
	Zombie* horde = new Zombie[N];

	//initialize zombies
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(_name);
	}
	// Return pointer to first zombie
	return horde;
}