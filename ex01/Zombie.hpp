#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _name;

public:
	//Constructor
	Zombie(std::string _name);
	// Constructor für Arrays!
	Zombie();
	// Setter für Name
	void setName(std::string _name);

	~Zombie();
	void announcement(void);
};
Zombie* zombieHorde(int N, std::string _name);
#endif