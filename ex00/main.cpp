/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:59:41 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/09 10:53:18 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    // Test 1: randomChump (Stack - automatisch)
    std::cout << "Test 1: randomChump (Stack)" << std::endl;
    randomChump("StackZombie");
    std::cout << "StackZombie is already dead!\n" << std::endl;
    
    // Test 2: newZombie
    std::cout << "Test 2: newZombie (Heap)" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    std::cout << "HeapZombie is still alive!" << std::endl;
    heapZombie->announcement();
    delete heapZombie;
    std::cout << std::endl;
    
    // Test 3: Multiple Heap Zombies
    std::cout << "Test 3: Multiple Zombies" << std::endl;
    Zombie* zombie1 = newZombie("ZombieDerErste");
    Zombie* zombie2 = newZombie("ZombieDerZweite");
    zombie1->announcement();
    zombie2->announcement();
    delete zombie1;
    delete zombie2;
    std::cout << std::endl;
    
    // Test 4: Stack Zombie in Scope
    std::cout << "Test 4: Stack Scope Test" << std::endl;
    {
        Zombie scopeZombie("ScopeZombie");
        scopeZombie.announcement();
    }
    std::cout << "ScopeZombie is dead now!\n" << std::endl;
    
    // Test 5: best of both worlds
    std::cout << "Test 5: Mix Stack & Heap" << std::endl;
    randomChump("QuickiZombie");
    Zombie* kraeftigerZombie = newZombie("KraeftigerZombie");
    randomChump("AnotherQuickiOne");
    kraeftigerZombie->announcement();
    delete kraeftigerZombie;
    
    return 0;
}
