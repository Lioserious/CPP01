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
		//Deconstructor
		~Zombie();
		//Bekanntmachung Zombie: BRAAIN
		void announcement(void);
		std::string getName(void) const;
};

Zombie* newZombie(std::string _name);
void randomChump(std::string _name);
#endif