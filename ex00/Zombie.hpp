#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		//Constructor
		Zombie(std::string name);
		//Deconstructor
		~Zombie();
		//Bekanntmachung Zombie: BRAAIN
		void announcement(void);
		std::string getName(void) const;
};

Zombie* newZombie(std::string name);
#endif