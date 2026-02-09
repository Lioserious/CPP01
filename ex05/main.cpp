/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:28:51 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/09 15:44:10 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    
    std::cout << "Testing DEBUG" << std::endl;
    harl.complain("DEBUG");
    
    std::cout << "\nTesting INFO" << std::endl;
    harl.complain("INFO");
    
    std::cout << "\nTesting WARNING" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\nTesting ERROR" << std::endl;
    harl.complain("ERROR");
    
    std::cout << "\nTesting Invalid" << std::endl;
    harl.complain("INVALID");
    
    return 0;
}
