/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 13:59:41 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/06 15:09:25 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Später in main.cpp
#include "Zombie.hpp"

int main()
{
    // Test 1: randomChump (Stack - automatisch)
    std::cout << "=== Test 1: randomChump (Stack) ===" << std::endl;
    randomChump("StackZombie");
    std::cout << "StackZombie is already dead!\n" << std::endl;
    
    // Test 2: newZombie (Heap - manuell)
    std::cout << "=== Test 2: newZombie (Heap) ===" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    std::cout << "HeapZombie is still alive!" << std::endl;
    heapZombie->announcement();
    delete heapZombie;
    std::cout << std::endl;
    
    // Test 3: Multiple Heap Zombies
    std::cout << "=== Test 3: Multiple Zombies ===" << std::endl;
    Zombie* z1 = newZombie("Zombie1");
    Zombie* z2 = newZombie("Zombie2");
    z1->announcement();
    z2->announcement();
    delete z1;
    delete z2;
    std::cout << std::endl;
    
    // Test 4: Stack Zombie in Scope
    std::cout << "=== Test 4: Stack Scope Test ===" << std::endl;
    {
        Zombie scopeZombie("ScopeZombie");
        scopeZombie.announcement();
    }
    std::cout << "ScopeZombie is dead now!\n" << std::endl;
    
    // Test 5: Mix of both
    std::cout << "=== Test 5: Mix Stack & Heap ===" << std::endl;
    randomChump("QuickZombie");
    Zombie* persistentZombie = newZombie("PersistentZombie");
    randomChump("AnotherQuickOne");
    persistentZombie->announcement();
    delete persistentZombie;
    
    return 0;
}
