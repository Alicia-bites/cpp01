#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include "colors.hpp"
#include <climits>

class Zombie
{
	public :
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void			announce() const;
		void			setName(std::string name);

	private :
		std::string name;
};

Zombie* ZombieHorde(int n, std::string name);
void			display_error_message();
void			display_message_if_zero_zombie();
void			display_number_of_zombies(int n);

#endif