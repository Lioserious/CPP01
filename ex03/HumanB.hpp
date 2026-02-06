#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon* weapon;  // POINTER!

public:
    // Constructor - NO Weapon parameter
    HumanB(std::string name);
    
    // Setter for weapon
    void setWeapon(Weapon& weapon);
    
    // Attack function
    void attack();
};

#endif