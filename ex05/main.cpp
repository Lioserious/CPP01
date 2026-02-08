/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:28:51 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/08 10:41:29 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    
    std::cout << "=== Testing DEBUG ===" << std::endl;
    harl.complain("DEBUG");
    
    std::cout << "\n=== Testing INFO ===" << std::endl;
    harl.complain("INFO");
    
    std::cout << "\n=== Testing WARNING ===" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\n=== Testing ERROR ===" << std::endl;
    harl.complain("ERROR");
    
    std::cout << "\n=== Testing Invalid ===" << std::endl;
    harl.complain("INVALID");
    
    return 0;
}
