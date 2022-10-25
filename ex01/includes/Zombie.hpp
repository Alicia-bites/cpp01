#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <climits>

# define YELLOW6 "\033[38;5;106m"
# define YELLOW3 "\033[38;5;148m"
# define YELLOW2 "\033[38;5;190m"
# define YELLOW1 "\033[38;5;226m"
# define INDIANRED2 "\033[38;5;167m"
# define INDIANRED3 "\033[38;5;203m"
# define INDIANRED4 "\033[38;5;204m"
# define TURQUOISE4 "\033[38;5;30m"
# define RESET "\033[0m"

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