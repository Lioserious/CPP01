#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
private:
    std::string type;

public:
    // Constructor
    Weapon(std::string type);
    
    // Getter
    const std::string& getType() const;
    
    // Setter
    void setType(std::string newType);
};

#endif