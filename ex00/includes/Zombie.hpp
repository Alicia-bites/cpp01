#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include "colors.hpp"

class Zombie
{
	public :
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce();
		
	private :
		std::string name;
};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif