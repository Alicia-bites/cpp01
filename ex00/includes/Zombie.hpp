#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

# define THISTLE1 "\033[38;5;225m"
# define STEELBLUE4 "\033[38;5;68m"
# define PALEVIOLETRED1 "\033[38;5;211m"
# define RESET "\033[0m"

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