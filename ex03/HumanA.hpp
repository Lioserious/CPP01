#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    // Ponter zu Waffe
    Weapon& weapon;

public:
    // Constructor - takes Weapon reference
    HumanA(std::string name, Weapon& weapon);
    
    // Attacke
    void attack();
};

#endif