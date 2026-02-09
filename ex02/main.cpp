/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:16:10 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/09 15:00:38 by lihrig           ###   ########.fr       */
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
    std::cout << "Memory addresse von str:       " << &str << std::endl;
    std::cout << "Memory addresse  von stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory addresse fuer stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;
    
    // Print values
    std::cout << "Value of str:        " << str << std::endl;
    std::cout << "Value via stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value via stringREF: " << stringREF << std::endl;
    return 0;
}