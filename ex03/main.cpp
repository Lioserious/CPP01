/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lihrig <lihrig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:34:20 by lihrig            #+#    #+#             */
/*   Updated: 2026/02/09 15:19:44 by lihrig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon schwert = Weapon("Schwert");
        
        HumanA Konrad("Konrad", schwert);
        Konrad.attack();
        schwert.setType("Holzschwert");
        Konrad.attack();
    }
    {
        Weapon schwert = Weapon("Diaschwert");
        
        HumanB Kevin("Kevin");
        Kevin.setWeapon(schwert);
        Kevin.attack();
        schwert.setType("Bronzeschwert");
        Kevin.attack();
    }
    return 0;
}
