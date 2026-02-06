#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon& weapon;  // REFERENCE!

public:
    // Constructor - takes Weapon reference
    HumanA(std::string name, Weapon& weapon);
    
    // Attack function
    void attack();
};

#endif