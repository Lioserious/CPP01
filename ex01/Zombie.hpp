#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;

public:
	//Constructor
	Zombie(std::string name);
	// Constructor für Arrays!
	Zombie();
	// Setter für Name
	void setName(std::string name);

	~Zombie();
	void announcement(void);
};

Zombie* zombieHorde(int N, std::string name);
#endif