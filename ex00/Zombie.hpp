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
		void announcement(void);
};

#endif