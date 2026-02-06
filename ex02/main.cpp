/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:16:10 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/06 16:17:51 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    // Create string
    std::string str = "HI THIS IS BRAIN";
    
    // Create pointer
    std::string* stringPTR = &str;
    
    // Create reference to the string
    std::string& stringREF = str;
    
    // Print memory addresses
    std::cout << "Memory address of str:       " << &str << std::endl;
    std::cout << "Memory address in stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
    
    std::cout << std::endl;
    
    // Print values
    std::cout << "Value of str:        " << str << std::endl;
    std::cout << "Value via stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value via stringREF: " << stringREF << std::endl;
    return 0;
}