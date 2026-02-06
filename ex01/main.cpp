/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:59:41 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/06 16:10:47 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Später in main.cpp
#include "Zombie.hpp"

int main()
{
    std::cout << "=== Test 1: Small Horde (3 Zombies) ===" << std::endl;
    int N = 3;
    Zombie* horde = zombieHorde(N, "HordeZombie");
    
    // Test all zombies
    for (int i = 0; i < N; i++)
    {
        horde[i].announcement();
    }
    // Clean up
    delete[] horde;
    std::cout << "\n=== Test 2: Larger Horde (5 Zombies) ===" << std::endl;
    int M = 5;
    Zombie* bigHorde = zombieHorde(M, "BigHorde");
    for (int i = 0; i < M; i++)
    {
        bigHorde[i].announcement();
    }
    delete[] bigHorde;
    std::cout << "\n=== Test 3: Single Zombie ===" << std::endl;
    Zombie* one = zombieHorde(1, "Alone");
    one[0].announcement();
    delete[] one;
    
    return 0;
}
