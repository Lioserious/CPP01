/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:29:48 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/09 15:42:19 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "Lecker Burger" << std::endl;
}

void Harl::info(void)
{
    std::cout << "Leckere Burger inklusive Bacon, der kostet Extra" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "Stammkunden, sollten extra Bacon bekommen" << std::endl;
}

void Harl::error(void)
{
    std::cout << "Inakzeptable, ich moechte den manager sehen" << std::endl;
}

void Harl::complain(std::string level)
{
    // Array
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    // Array von Function Pointers
    void (Harl::*functions[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    // Finde und iteriere durch die Funktionen
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "Unbekannt: " << level << std::endl;
}